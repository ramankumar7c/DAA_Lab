#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void findGCDs(const char *inputFile, const char *outputFile) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");
    int num1, num2;
    int pairs = 0;

    if (inFile == NULL || outFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fscanf(inFile, "%d %d", &num1, &num2) != EOF) {
        int result = gcd(num1, num2);
        fprintf(outFile, "The GCD of %d and %d is %d\n", num1, num2, result);
        pairs++;
    }

    if (pairs < 20) {
        printf("The source file must contain at least 20 pairs of numbers.\n");
    }

    fclose(inFile);
    fclose(outFile);
}

void displayOutputFile(const char *outputFile) {
    FILE *outFile = fopen(outputFile, "r");
    char line[256];

    if (outFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), outFile) != NULL) {
        printf("%s", line);
    }

    fclose(outFile);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    const char *sourceFile = argv[1];
    const char *destFile = argv[2];

    findGCDs(sourceFile, destFile);
    displayOutputFile(destFile);

    return 0;
}
