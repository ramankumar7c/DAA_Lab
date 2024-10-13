#include <stdio.h>
#include <limits.h>

#define INF INT_MAX
#define V 5

void printMatrix(int dist[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

void printPath(int predecessor[V][V], int i, int j) {
    if (i == j) {
        printf("%d", i + 1);
    } else if (predecessor[i][j] == -1) {
        printf("No path exists.");
    } else {
        printPath(predecessor, i, predecessor[i][j]);
        printf(" --> %d", j + 1);
    }
}

void floydWarshall(int graph[V][V]) {
    int dist[V][V], predecessor[V][V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
            if (graph[i][j] != INF && i != j)
                predecessor[i][j] = i;
            else
                predecessor[i][j] = -1;
        }
    }

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    predecessor[i][j] = predecessor[k][j];
                }
            }
        }
    }

    int src, dest;
    printf("Enter the source and destination vertex: ");
    scanf("%d %d", &src, &dest);
    
    printf("Shortest Path Matrix:\n");
    printMatrix(dist);
    
    src--;
    dest--;

    printf("\nShortest Path from vertex %d to vertex %d: ", src + 1, dest + 1);
    printPath(predecessor, src, dest);
    if (dist[src][dest] != INF)
        printf("\nPath weight: %d\n", dist[src][dest]);
    else
        printf("\nNo path available\n");
}

void readInputFile(char* filename, int graph[V][V]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            fscanf(file, "%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j)
                graph[i][j] = INF;
        }
    }

    fclose(file);
}

int main() {
    int graph[V][V];

    readInputFile("inDiAdjMat2.dat", graph);

    floydWarshall(graph);

    return 0;
}
