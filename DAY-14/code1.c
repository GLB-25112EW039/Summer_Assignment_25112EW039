#include <stdio.h>

int main() {
    int n, key, foundIndex = -1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found\n");
    }

    return 0;
}