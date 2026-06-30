#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        int element;
        scanf("%d", &element);
        arr[n] = element;
        n++;
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    } else if (choice == 2) {
        int index;
        scanf("%d", &index);
        if (index >= 0 && index < n) {
            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}