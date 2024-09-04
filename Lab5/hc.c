#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char alphabet;
    int frequency;
} SYMBOL;

typedef struct Node {
    SYMBOL symbol;
    struct Node *left, *right;
} Node;

typedef struct {
    int size;
    int capacity;
    Node **array;
} MinHeap;

Node* createNode(char alphabet, int frequency) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->symbol.alphabet = alphabet;
    node->symbol.frequency = frequency;
    node->left = node->right = NULL;
    return node;
}

MinHeap* createMinHeap(int capacity) {
    MinHeap* minHeap = (MinHeap*)malloc(sizeof(MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (Node**)malloc(minHeap->capacity * sizeof(Node*));
    return minHeap;
}

void swapNodes(Node** a, Node** b) {
    Node* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(MinHeap* minHeap, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < minHeap->size && minHeap->array[left]->symbol.frequency < minHeap->array[smallest]->symbol.frequency)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->symbol.frequency < minHeap->array[smallest]->symbol.frequency)
        smallest = right;

    if (smallest != index) {
        swapNodes(&minHeap->array[smallest], &minHeap->array[index]);
        minHeapify(minHeap, smallest);
    }
}

void insertMinHeap(MinHeap* minHeap, Node* node) {
    ++minHeap->size;
    int i = minHeap->size - 1;

    while (i && node->symbol.frequency < minHeap->array[(i - 1) / 2]->symbol.frequency) {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }

    minHeap->array[i] = node;
}

Node* extractMin(MinHeap* minHeap) {
    Node* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}

Node* buildHuffmanTree(char alphabets[], int frequencies[], int size) {
    Node *left, *right, *top;
    MinHeap* minHeap = createMinHeap(size);

    for (int i = 0; i < size; ++i)
        insertMinHeap(minHeap, createNode(alphabets[i], frequencies[i]));

    while (minHeap->size != 1) {
        left = extractMin(minHeap);
        right = extractMin(minHeap);

        top = createNode('$', left->symbol.frequency + right->symbol.frequency);
        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }

    return extractMin(minHeap);
}

void inOrderTraversal(Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        if (root->symbol.alphabet != '$')
            printf("%c ", root->symbol.alphabet);
        inOrderTraversal(root->right);
    }
}

int main() {
    int n;

    printf("Enter the number of distinct alphabets: ");
    scanf("%d", &n);

    char alphabets[n];
    int frequencies[n];

    printf("Enter the alphabets: ");
    for (int i = 0; i < n; i++)
        scanf(" %c", &alphabets[i]);

    printf("Enter its frequencies: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &frequencies[i]);

    Node* root = buildHuffmanTree(alphabets, frequencies, n);

    printf("In-order traversal of the tree (Huffman): ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
