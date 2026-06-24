#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50] = "", current[50] = "";
    scanf(" %[^\n]s", str);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }
    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("%s\n", longest);
    return 0;
}