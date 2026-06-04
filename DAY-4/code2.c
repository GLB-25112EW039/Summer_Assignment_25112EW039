#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n == 1) {
        nextTerm = t1;
    } else if (n == 2) {
        nextTerm = t2;
    } else {
        for (int i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    
    printf("%dth Fibonacci term is: %d\n", n, nextTerm);
    return 0;
}