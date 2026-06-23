#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[256] = {0};
    char result = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
        freq[(unsigned char)str[i]]++;
    }

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("None\n");
    }

    return 0;
}