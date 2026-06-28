#include <stdio.h>

struct Account {
    int accNo;
    char holderName[50];
    double balance;
};

int main() {
    struct Account acc;
    scanf("%d %s %lf", &acc.accNo, acc.holderName, &acc.balance);

    int action;
    scanf("%d", &action);

    if (action == 1) {
        double deposit;
        scanf("%lf", &deposit);
        acc.balance += deposit;
    } else if (action == 2) {
        double withdraw;
        scanf("%lf", &withdraw);
        if (withdraw <= acc.balance) {
            acc.balance -= withdraw;
        } else {
            printf("Insufficient Funds\n");
        }
    }

    printf("Account: %d\nName: %s\nBalance: %.2f\n", acc.accNo, acc.holderName, acc.balance);
    return 0;
}