#include <stdio.h>

int isArmstrong(int n) {
    int original = n;
    int temp = n;
    int count = 0;
    int sum = 0;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return original == sum;
}

int main() {
    int num;
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}