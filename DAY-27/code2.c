#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &e[i].id, e[i].name, &e[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}