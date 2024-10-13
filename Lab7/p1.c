#include <stdio.h>
#include <limits.h>
#define MAX 100
#define INF INT_MAX

// Function to find the vertex with the minimum distance
int findMinDistance(int dist[], int visited[], int n) {
    int min = INF, minIndex = -1;
    for (int v = 0; v < n; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to print the shortest path using the parent array
void printPath(int parent[], int j) {
    if (parent[j] == -1) {
        printf("%d", j + 1);  // Print the source vertex
        return;
    }
    printPath(parent, parent[j]);
    printf("->%d", j + 1);
}

// Dijkstra's algorithm to find the shortest path from a source vertex
void dijkstra(int graph[MAX][MAX], int n, int src) {
    int dist[n], visited[n], parent[n];
    
    // Initialization
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
        parent[i] = -1;
    }
    dist[src] = 0;
    
    // Main loop to find shortest paths
    for (int count = 0; count < n - 1; count++) {
        int u = findMinDistance(dist, visited, n);
        
        if (u == -1) break;
        
        visited[u] = 1;
        
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
    
    // Output the results
    printf("\nSource  Destination  Cost  Path\n");
    for (int i = 0; i < n; i++) {
        printf("  %d\t    %d\t    %d\t", src + 1, i + 1, dist[i]);
        
        if (i != src) {
            printPath(parent, i);
        } else {
            printf("-");
        }
        printf("\n");
    }
}

int main() {
    int n, src;
    FILE *inputFile = fopen("inDiAdjMat1.dat", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    
    printf("Enter the Number of Vertices: ");
    scanf("%d", &n);
    printf("Enter the Source Vertex: ");
    scanf("%d", &src);
    src--;  // Adjust to 0-based indexing
    
    int graph[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(inputFile, "%d", &graph[i][j]);
        }
    }
    fclose(inputFile);
    
    dijkstra(graph, n, src);
    return 0;
}
