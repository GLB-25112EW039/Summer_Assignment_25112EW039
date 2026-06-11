#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", findMax(num1, num2));
    return 0;
}