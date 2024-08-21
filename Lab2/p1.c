#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n, char *binary, int index) {
    if (index >= 16) {
        binary[16] = '\0';
        return;
    }
    decimalToBinary(n / 2, binary, index + 1);
    binary[15 - index] = (n % 2) + '0';
}

void convertDecimalToBinary(const char *inputFile, const char *outputFile, int count) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");
    int num;
    char binary[17];

    if (inFile == NULL || outFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < count && fscanf(inFile, "%d", &num) != EOF; i++) {
        decimalToBinary(num, binary, 0);
        fprintf(outFile, "The binary equivalent of %d is %s\n", num, binary);
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
    if (argc != 4) {
        printf("Usage: %s <n> <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    const char *sourceFile = argv[2];
    const char *destFile = argv[3];

    convertDecimalToBinary(sourceFile, destFile, n);
    displayOutputFile(destFile);

    return 0;
}
