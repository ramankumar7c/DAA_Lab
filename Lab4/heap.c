#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char *name;
    int age;
    int height;
    int weight;
};

void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyMin(struct person *heap, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left].age < heap[smallest].age)
        smallest = left;

    if (right < n && heap[right].age < heap[smallest].age)
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapifyMin(heap, n, smallest);
    }
}

void buildMinHeap(struct person *heap, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyMin(heap, n, i);
}

void heapifyMax(struct person *heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left].weight > heap[largest].weight)
        largest = left;

    if (right < n && heap[right].weight > heap[largest].weight)
        largest = right;

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        heapifyMax(heap, n, largest);
    }
}

void buildMaxHeap(struct person *heap, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyMax(heap, n, i);
}

void displayHeap(struct person *heap, int n) {
    if (n == 0) {
        printf("Heap is empty.\n");
        return;
    }
    printf("ID\tName\t\tAge\tHeight\tWeight\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%d\t%d\n", heap[i].id, heap[i].name, heap[i].age, heap[i].height, heap[i].weight);
    }
}

void readData(struct person **people, int *n) {
    FILE *file = fopen("students.txt", "r");
    if (!file) {
        printf("Could not open file\n");
        return;
    }

    fscanf(file, "%d", n);
    *people = (struct person *)malloc(*n * sizeof(struct person));

    for (int i = 0; i < *n; i++) {
        (*people)[i].name = malloc(100 * sizeof(char));
        fscanf(file, "%d %s %d %d %d", &(*people)[i].id, (*people)[i].name, &(*people)[i].age, &(*people)[i].height, &(*people)[i].weight);
    }

    fclose(file);
    printf("Data read successfully.\n");
}

void displayYoungestWeight(struct person *heap, int n) {
    if (n == 0) {
        printf("Heap is empty.\n");
        return;
    }
    printf("Weight of the youngest person: %d\n", heap[0].weight);
}

void insertPerson(struct person **heap, int *n, struct person newPerson) {
    (*n)++;
    *heap = realloc(*heap, *n * sizeof(struct person));
    (*heap)[*n - 1] = newPerson;

    int i = *n - 1;
    while (i != 0 && (*heap)[(i - 1) / 2].age > (*heap)[i].age) {
        swap(&(*heap)[i], &(*heap)[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void deleteOldestPerson(struct person *heap, int *n) {
    if (*n == 0) {
        printf("Heap is empty.\n");
        return;
    }

    swap(&heap[0], &heap[*n - 1]);
    (*n)--;
    heapifyMin(heap, *n, 0);
}

int main() {
    struct person *people = NULL;
    int n = 0;
    int choice;
    struct person newPerson;
    
    printf("\nMAIN MENU (HEAP)\n");
    printf("1. Read Data\n");
    printf("2. Create a Min-heap based on the age\n");
    printf("3. Create a Max-heap based on the weight\n");
    printf("4. Display weight of the youngest person\n");
    printf("5. Insert a new person into the Min-heap\n");
    printf("6. Delete the oldest person\n");
    printf("7. Exit\n");
    
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                readData(&people, &n);
                break;
            case 2:
                buildMinHeap(people, n);
                printf("Min-heap created based on age.\n");
                displayHeap(people, n);  // Automatically display the min-heap
                break;
            case 3:
                buildMaxHeap(people, n);
                printf("Max-heap created based on weight.\n");
                displayHeap(people, n);  // Automatically display the max-heap
                break;
            case 4:
                displayYoungestWeight(people, n);
                break;
            case 5:
                printf("Enter ID: ");
                scanf("%d", &newPerson.id);
                newPerson.name = malloc(100 * sizeof(char));
                printf("Enter Name: ");
                scanf("%s", newPerson.name);
                printf("Enter Age: ");
                scanf("%d", &newPerson.age);
                printf("Enter Height: ");
                scanf("%d", &newPerson.height);
                printf("Enter Weight: ");
                scanf("%d", &newPerson.weight);
                insertPerson(&people, &n, newPerson);
                printf("Person inserted into Min-heap.\n");
                break;
            case 6:
                deleteOldestPerson(people, &n);
                printf("Oldest person deleted.\n");
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(people[i].name);
    }
    free(people);

    return 0;
}

