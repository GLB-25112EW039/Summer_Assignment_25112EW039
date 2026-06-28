#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Contact contacts[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s", contacts[i].name, contacts[i].phone);
    }

    char query[50];
    scanf("%s", query);

    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, query) == 0) {
            printf("Phone: %s\n", contacts[i].phone);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("Contact Not Found\n");
    }

    return 0;
}