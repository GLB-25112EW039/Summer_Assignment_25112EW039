#include <stdio.h>

struct Salary {
    int empId;
    double base;
    double allowance;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Salary s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %lf %lf", &s[i].empId, &s[i].base, &s[i].allowance);
    }

    for (int i = 0; i < n; i++) {
        double gross = s[i].base + s[i].allowance;
        printf("%d %.2f\n", s[i].empId, gross);
    }

    return 0;
}