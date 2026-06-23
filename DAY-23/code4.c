#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[256] = {0};
    int max = -1;
    char result;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (max < freq[(unsigned char)str[i]]) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    printf("%c\n", result);
    return 0;
}