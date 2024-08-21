#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long comparisons = 0;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void generateAscendingData(const char *fileName, int size) {
    FILE *file = fopen(fileName, "w");
    if (!file) {
        printf("Error creating file: %s\n", fileName);
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", (i + 1) * 10);
    }
    fclose(file);
}

void generateDescendingData(const char *fileName, int size) {
    FILE *file = fopen(fileName, "w");
    if (!file) {
        printf("Error creating file: %s\n", fileName);
        exit(1);
    }

    for (int i = size; i > 0; i--) {
        fprintf(file, "%d ", i * 10);
    }
    fclose(file);
}

void generateRandomData(const char *fileName, int size) {
    FILE *file = fopen(fileName, "w");
    if (!file) {
        printf("Error creating file: %s\n", fileName);
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", rand() % 1000);
    }
    fclose(file);
}

void readFile(const char *fileName, int arr[], int *size) {
    FILE *file = fopen(fileName, "r");
    if (!file) {
        printf("Error opening file: %s\n", fileName);
        exit(1);
    }

    *size = 0;
    while (fscanf(file, "%d", &arr[*size]) != EOF) {
        (*size)++;
    }
    fclose(file);
}

void writeFile(const char *fileName, int arr[], int size) {
    FILE *file = fopen(fileName, "w");
    if (!file) {
        printf("Error opening file: %s\n", fileName);
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", arr[i]);
    }
    fclose(file);
}

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void menu() {
    printf("MAIN MENU (MERGE SORT)\n");
    printf("1. Ascending Data\n");
    printf("2. Descending Data\n");
    printf("3. Random Data\n");
    printf("4. ERROR (EXIT)\n");
}

int main() {
    int option;
    int arr[500];
    int size = 0;
    int numElements;

    while (1) {
        menu();
        printf("Enter option: ");
        scanf("%d", &option);

        const char *inputFile, *outputFile;

        numElements = rand() % 201 + 300;

        switch (option) {
            case 1:
                inputFile = "inAsce.dat";
                outputFile = "outMergeAsce.dat";
                generateAscendingData(inputFile, numElements);
                break;
            case 2:
                inputFile = "inDesc.dat";
                outputFile = "outMergeDesc.dat";
                generateDescendingData(inputFile, numElements);
                break;
            case 3:
                inputFile = "inRand.dat";
                outputFile = "outMergeRand.dat";
                generateRandomData(inputFile, numElements);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid option. Try again.\n");
                continue;
        }

        readFile(inputFile, arr, &size);
        printf("Before Sorting: ");
        displayArray(arr, size);

        comparisons = 0;
        struct timespec start, end;
        clock_gettime(CLOCK_MONOTONIC, &start);

        mergeSort(arr, 0, size - 1);

        clock_gettime(CLOCK_MONOTONIC, &end);
        long long executionTime = (end.tv_sec - start.tv_sec) * 1000000000LL + (end.tv_nsec - start.tv_nsec);

        printf("After Sorting: ");
        displayArray(arr, size);
        printf("Number of Comparisons: %ld\n", comparisons);
        printf("Execution Time: %lld nanoseconds\n", executionTime);

        writeFile(outputFile, arr, size);
    }

    return 0;
}
