#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", reverseNumber(num, 0));
    return 0;
}