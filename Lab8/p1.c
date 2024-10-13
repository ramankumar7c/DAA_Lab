#include <stdio.h>
#include <limits.h>

void printOptimalParenthesis(int s[][100], int i, int j) {
    if (i == j)
        printf("A%d", i + 1);
    else {
        printf("(");
        printOptimalParenthesis(s, i, s[i][j]);
        printOptimalParenthesis(s, s[i][j] + 1, j);
        printf(")");
    }
}

void matrixChainMultiplication(int p[], int n) {
    int m[100][100], s[100][100];

    for (int i = 0; i < n; i++) {
        m[i][i] = 0;
    }

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("M Table:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                printf("0\t");
            } else {
                printf("%d\t", m[i][j]);
            }
        }
        printf("\n");
    }

    printf("S Table:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                printf("0\t");
            } else {
                printf("%d\t", s[i][j] + 1); // Convert index to 1-based
            }
        }
        printf("\n");
    }

    printf("Optimal parenthesization: ");
    printOptimalParenthesis(s, 0, n - 1);
    printf("\nThe optimal ordering of the given matrices requires %d scalar multiplications.\n", m[0][n - 1]);
}

int main() {
    int n;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[100];
    printf("Enter row and col size of A1: ");
    scanf("%d %d", &p[0], &p[1]);

    for (int i = 2; i <= n; i++) {
        int row, col;
        printf("Enter row and col size of A%d: ", i);
        scanf("%d %d", &row, &col);
        if (p[i - 1] != row) {
            printf("Error: Matrix dimensions incompatible!\n");
            return -1;
        }
        p[i] = col;
    }

    matrixChainMultiplication(p, n);

    return 0;
}
