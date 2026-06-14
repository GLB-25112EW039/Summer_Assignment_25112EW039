#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0, val;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &val);
        actualSum += val;
    }

    printf("%d\n", expectedSum - actualSum);
    return 0;
}