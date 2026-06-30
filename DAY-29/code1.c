#include <stdio.h>

int main() {
    int choice;
    double a, b;

    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4) {
        scanf("%lf %lf", &a, &b);
    }

    switch (choice) {
        case 1:
            printf("%.2f\n", a + b);
            break;
        case 2:
            printf("%.2f\n", a - b);
            break;
        case 3:
            printf("%.2f\n", a * b);
            break;
        case 4:
            if (b != 0) printf("%.2f\n", a / b);
            else printf("Error\n");
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}