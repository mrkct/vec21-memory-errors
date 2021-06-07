#include <stdio.h>
#include <string.h>


struct BankAccount {
    char name[8];
    int money;
};

int main()
{
    struct BankAccount account;
    account.money = 1280;
    strcpy(account.name, "Giacobbe");

    printf("%s ha %d€\n", account.name, account.money);

    return 0;
}