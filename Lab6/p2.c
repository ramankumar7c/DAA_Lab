#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

struct Subset {
    int parent;
    int rank;
};

int find(struct Subset subsets[], int i);
void unionSets(struct Subset subsets[], int x, int y);
int compareEdges(const void *a, const void *b);
void kruskalMST(struct Edge edges[], int n, int m);

int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void unionSets(struct Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}

int compareEdges(const void *a, const void *b) {
    struct Edge *edgeA = (struct Edge *)a;
    struct Edge *edgeB = (struct Edge *)b;
    return edgeA->weight - edgeB->weight;
}

void kruskalMST(struct Edge edges[], int n, int m) {
    qsort(edges, m, sizeof(struct Edge), compareEdges);

    struct Subset *subsets = (struct Subset *)malloc(n * sizeof(struct Subset));

    for (int v = 0; v < n; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    printf("Edge\tCost\n");

    int totalCost = 0;
    int edgesSelected = 0;

    for (int i = 0; i < m && edgesSelected < n - 1; i++) {
        int u = edges[i].u - 1;
        int v = edges[i].v - 1;
        int setU = find(subsets, u);
        int setV = find(subsets, v);

        if (setU != setV) {
            printf("%d--%d \t%d\n", edges[i].u, edges[i].v, edges[i].weight);
            totalCost += edges[i].weight;
            unionSets(subsets, setU, setV);
            edgesSelected++;
        }
    }

    printf("Total Weight of the Spanning Tree: %d\n", totalCost);

    free(subsets);
}

int main() {
    int n, m;
    
    printf("Enter the number of nodes and edges: ");
    scanf("%d %d", &n, &m);

    struct Edge edges[MAX];

    printf("Enter the edges (u v w):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
    }

    kruskalMST(edges, n, m);

    return 0;
}
