#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    while (num > 0) {
        count += (num & 1);
        num >>= 1;
    }

    printf("%d\n", count);

    return 0;
}