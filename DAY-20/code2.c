#include <stdio.h>

int main() {
    int n, isSymmetric = 1;
    scanf("%d", &n);
    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}