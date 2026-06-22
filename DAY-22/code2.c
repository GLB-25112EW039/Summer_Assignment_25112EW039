#include <stdio.h>

int main() {
    char str[200];
    scanf(" %[^\n]s", str);

    int count = 0;
    int i = 0;
    int inWord = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}