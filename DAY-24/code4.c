#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[256] = {0};
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            freq[(unsigned char)str[i]] = 1;
            str[count++] = str[i];
        }
    }
    str[count] = '\0';

    printf("%s\n", str);
    return 0;
}