#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("%s\n", str);
    return 0;
}