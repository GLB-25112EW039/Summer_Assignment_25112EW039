#include <stdio.h>

struct MiniEmployee {
    int id;
    char name[50];
    float hoursWorked;
    float hourlyRate;
};

int main() {
    int n;
    scanf("%d", &n);
    struct MiniEmployee list[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f %f", &list[i].id, list[i].name, &list[i].hoursWorked, &list[i].hourlyRate);
    }

    for (int i = 0; i < n; i++) {
        float totalSalary = list[i].hoursWorked * list[i].hourlyRate;
        printf("ID: %d | Name: %s | Pay: %.2f\n", list[i].id, list[i].name, totalSalary);
    }

    return 0;
}