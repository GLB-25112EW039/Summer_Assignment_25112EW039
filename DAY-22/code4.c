#include <stdio.h>

int main() {
    char str[200];
    scanf(" %[^\n]s", str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';

    printf("%s\n", str);
    return 0;
}