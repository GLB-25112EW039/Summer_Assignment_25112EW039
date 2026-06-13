#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n && n != 0);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPerfect(num)) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }
    return 0;
}