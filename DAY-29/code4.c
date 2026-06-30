#include <stdio.h>

struct Item {
    int code;
    char name[30];
    int quantity;
};

int main() {
    int count;
    scanf("%d", &count);
    struct Item inventory[count];

    for (int i = 0; i < count; i++) {
        scanf("%d %s %d", &inventory[i].code, inventory[i].name, &inventory[i].quantity);
    }

    int targetCode, updateQty;
    scanf("%d %d", &targetCode, &updateQty);

    for (int i = 0; i < count; i++) {
        if (inventory[i].code == targetCode) {
            inventory[i].quantity += updateQty;
            printf("Updated: %s -> Qty: %d\n", inventory[i].name, inventory[i].quantity);
            break;
        }
    }

    return 0;
}