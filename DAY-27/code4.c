#include <stdio.h>

struct Marksheet {
    char name[50];
    int rollNo;
    int sub1;
    int sub2;
    int sub3;
};

int main() {
    struct Marksheet m;
    scanf("%s %d %d %d %d", m.name, &m.rollNo, &m.sub1, &m.sub2, &m.sub3);

    int total = m.sub1 + m.sub2 + m.sub3;
    float percentage = total / 3.0;

    printf("Name: %s\n", m.name);
    printf("Roll No: %d\n", m.rollNo);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 40.0) {
        printf("Result: PASSED\n");
    } else {
        printf("Result: FAILED\n");
    }

    return 0;
}