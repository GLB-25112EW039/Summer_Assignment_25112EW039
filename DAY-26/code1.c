#include <stdio.h>

int main() {
    int secret = 42;
    int guess;

    do {
        scanf("%d", &guess);
        if (guess > secret) {
            printf("Higher\n");
        } else if (guess < secret) {
            printf("Lower\n");
        }
    } while (guess != secret);

    printf("Correct\n");
    return 0;
}