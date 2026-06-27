#include <stdio.h>

int main() {
    int choice;
    double balance = 5000.0, amount;

    scanf("%d", &choice);

    if (choice == 1) {
        printf("%.2f\n", balance);
    } else if (choice == 2) {
        scanf("%lf", &amount);
        balance += amount;
        printf("%.2f\n", balance);
    } else if (choice == 3) {
        scanf("%lf", &amount);
        if (amount <= balance) {
            balance -= amount;
            printf("%.2f\n", balance);
        } else {
            printf("Insufficient Balance\n");
        }
    }

    return 0;
}