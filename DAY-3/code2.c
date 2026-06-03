#include <stdio.h>

int main() {
    int low, high, isPrime;
    
    printf("Enter lower bound and upper bound: ");
    scanf("%d %d", &low, &high);
    
    printf("Prime numbers between %d and %d are: ", low, high);
    
    for (int i = low; i <= high; i++) {
        if (i <= 1) {
            continue;
        }
        
        isPrime = 1;
        
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}