#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = (double)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}