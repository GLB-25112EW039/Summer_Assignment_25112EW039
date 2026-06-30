#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char names[n][50];
    int rolls[n];
    float grades[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", names[i], &rolls[i], &grades[i]);
    }

    float highest = grades[0];
    int topIdx = 0;

    for (int i = 1; i < n; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
            topIdx = i;
        }
    }

    printf("Top Student: %s (Roll: %d) - Grade: %.2f\n", names[topIdx], rolls[topIdx], grades[topIdx]);
    return 0;
}