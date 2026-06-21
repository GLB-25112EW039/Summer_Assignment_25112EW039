#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, sum);
    }
    return 0;
}