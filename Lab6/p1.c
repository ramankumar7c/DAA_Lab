#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

int minKey(int key[], bool mstSet[], int V) {
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void printMST(int parent[], int graph[][9], int V) {
    int mstGraph[9][9] = {0};  // Initialize to zero
    int totalWeight = 0;
    printf("Cost Adjacency Matrix of the Minimum Spanning Tree:\n");
    for (int i = 1; i < V; i++) {
        mstGraph[i][parent[i]] = graph[i][parent[i]];
        mstGraph[parent[i]][i] = graph[i][parent[i]]; // Ensure symmetry
        totalWeight += graph[i][parent[i]];
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d\t", mstGraph[i][j]);
        }
        printf("\n");
    }
    printf("Total Weight of the Spanning Tree: %d\n", totalWeight);
}

void primMST(int graph[][9], int V, int startVertex) {
    int parent[9];
    int key[9];
    bool mstSet[9];

    for (int i = 0; i < V; i++) {
        key[i] = INF;
        mstSet[i] = false;
    }

    key[startVertex] = 0;
    parent[startVertex] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet, V);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph, V);
}

int main() {
    int V;
    printf("Enter the Number of Vertices: ");
    scanf("%d", &V);

    int startVertex;
    printf("Enter the Starting Vertex: ");
    scanf("%d", &startVertex);
    startVertex--;

    FILE *file = fopen("inUnAdjMat.dat", "r");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    int graph[9][9];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            fscanf(file, "%d", &graph[i][j]);
        }
    }
    fclose(file);

    primMST(graph, V, startVertex);

    return 0;
}
