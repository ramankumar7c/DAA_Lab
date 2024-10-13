#include <stdio.h>
#include <string.h>

#define MAX 100

void printLCS(int lcsTable[][MAX], char* X, char* Y, int m, int n) {
    int index = lcsTable[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        }
        else if (lcsTable[i - 1][j] >= lcsTable[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("LCS: %s\n", lcs);
}

int LCS(char* X, char* Y, int m, int n) {
    int lcsTable[MAX][MAX];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                lcsTable[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                lcsTable[i][j] = lcsTable[i - 1][j - 1] + 1;
            } else {
                lcsTable[i][j] = (lcsTable[i - 1][j] > lcsTable[i][j - 1]) ? lcsTable[i - 1][j] : lcsTable[i][j - 1];
            }
        }
    }

    printLCS(lcsTable, X, Y, m, n);
    printf("LCS Length: %d\n", lcsTable[m][n]);
    
    return lcsTable[m][n];
}

int main() {
    char X[MAX], Y[MAX];
    int m, n;

    printf("Enter the first string into an array: ");
    scanf("%s", X);
    printf("Enter the second string into an array: ");
    scanf("%s", Y);

    m = strlen(X);
    n = strlen(Y);

    LCS(X, Y, m, n);

    return 0;
}

