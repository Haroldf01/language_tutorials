#include <stdio.h>

int main()
{
    struct bank
    {
        int account;
        double balance;
    };

    struct bank checking;

    checking.account = 1234;
    checking.balance = 231.7;

    printf("checking account %d has a balance of %f\n", checking.account, checking.balance);

    return 0;
}
