#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}