#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("1. Size of int in C?\n1) 2 bytes\n2) 4 bytes\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Score: %d\n", score);
    return 0;
}