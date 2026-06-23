#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    int freq1[256] = {0};
    int freq2[256] = {0};
    int isAnagram = 1;

    for (int i = 0; str1[i] != '\0'; i++) freq1[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++) freq2[(unsigned char)str2[i]]++;

    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}