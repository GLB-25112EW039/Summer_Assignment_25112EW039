#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    printf("%d\n", decimal);

    return 0;
}