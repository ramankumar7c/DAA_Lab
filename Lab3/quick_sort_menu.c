#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long comparisons = 0;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        comparisons++;
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high, int *scenario) {
    if (low < high) {
        int pi = partition(arr, low, high);

        int leftSize = pi - low;
        int rightSize = high - pi;
        if (leftSize == 0 || rightSize == 0) {
            *scenario = 0;
        } else if (leftSize <= (high - low) / 2 && rightSize <= (high - low) / 2) {
            *scenario = 1;
        }

        quickSort(arr, low, pi - 1, scenario);
        quickSort(arr, pi + 1, high, scenario);
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
    printf("MAIN MENU (QUICK SORT)\n");
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
    int scenario;

    while (1) {
        menu();
        printf("Enter option: ");
        scanf("%d", &option);

        const char *inputFile, *outputFile;

        numElements = rand() % 201 + 300;

        switch (option) {
            case 1:
                inputFile = "inQuickAsce.dat";
                outputFile = "outQuickAsce.dat";
                generateAscendingData(inputFile, numElements);
                break;
            case 2:
                inputFile = "inQuickDesc.dat";
                outputFile = "outQuickDesc.dat";
                generateDescendingData(inputFile, numElements);
                break;
            case 3:
                inputFile = "inQuickRand.dat";
                outputFile = "outQuickRand.dat";
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
        scenario = 1;

        quickSort(arr, 0, size - 1, &scenario);

        printf("After Sorting: ");
        displayArray(arr, size);
        printf("Number of Comparisons: %ld\n", comparisons);
        if (scenario == 1) {
            printf("Scenario: Best-case partitioning\n");
        } else {
            printf("Scenario: Worst-case partitioning\n");
        }

        writeFile(outputFile, arr, size);
    }

    return 0;
}
