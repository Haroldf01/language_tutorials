#include <stdio.h>

int main()
{
    struct bank
    {
        int account;
        double balance;
    };

    struct bank checking, savings;

    checking.account = 1234;
    checking.balance = 231.7;

    savings.account = 9876;
    savings.balance = 123;

    printf("checking account %d has a balance of %f\n", checking.account, checking.balance);
    printf("savings account %d has a balance of %f\n", savings.account, savings.balance);

    return 0;
}
