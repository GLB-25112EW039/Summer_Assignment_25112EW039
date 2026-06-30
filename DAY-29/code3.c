#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    scanf("%s", str1);
    scanf("%d", &choice);

    if (choice == 1) {
        printf("%d\n", (int)strlen(str1));
    } else if (choice == 2) {
        scanf("%s", str2);
        strcat(str1, str2);
        printf("%s\n", str1);
    } else if (choice == 3) {
        scanf("%s", str2);
        if (strcmp(str1, str2) == 0) printf("Equal\n");
        else printf("Not Equal\n");
    }

    return 0;
}