#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int unionArr[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) unionArr[k++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) unionArr[k++] = arr2[i];
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}