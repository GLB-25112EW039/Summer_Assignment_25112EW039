#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("%d\n", length);
    return 0;
}