#include <stdio.h>
#include <string.h>

struct MiniLibrary {
    char title[50];
    int copies;
};

int main() {
    int n;
    scanf("%d", &n);
    struct MiniLibrary books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", books[i].title, &books[i].copies);
    }

    char issueTitle[50];
    scanf("%s", issueTitle);

    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].title, issueTitle) == 0) {
            if (books[i].copies > 0) {
                books[i].copies--;
                printf("Issued. Remaining: %d\n", books[i].copies);
            } else {
                printf("Out of Stock\n");
            }
            break;
        }
    }

    return 0;
}