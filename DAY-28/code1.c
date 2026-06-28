#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Book library[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &library[i].id);
        scanf(" %[^\n]s", library[i].title);
        scanf(" %[^\n]s", library[i].author);
    }

    int searchId;
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (library[i].id == searchId) {
            printf("Book Found: %s by %s\n", library[i].title, library[i].author);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book Not Found\n");
    }

    return 0;
}
