#include <stdio.h>
#include <math.h>

int main() {
    int low, high;
    
    printf("Enter lower bound and upper bound: ");
    scanf("%d %d", &low, &high);
    
    printf("Armstrong numbers between %d and %d are: ", low, high);
    
    for (int i = low; i <= high; i++) {
        int temp1 = i;
        int temp2 = i;
        int digits = 0;
        int sum = 0;
        
        
        while (temp1 != 0) {
            temp1 /= 10;
            digits++;
        }
        
        // Calculate sum of powered digits
        while (temp2 != 0) {
            int remainder = temp2 % 10;
            sum += round(pow(remainder, digits));
            temp2 /= 10;
        }
        
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}