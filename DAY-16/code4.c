#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueSize = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }

    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}