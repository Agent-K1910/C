#include <stdio.h>
#include <stdlib.h>

int action(int choice, int balance)
{
    int deposit, withdraw;
    switch (choice)
    {
        case 1:
            printf("\nHow much money would you like to Deposit?");
            scanf("%d", &deposit);

            balance += deposit;
            printf("\nAfter your deposit you have %d Ruppes.\n", balance);

            break;

        case 2:
            printf("\nHow much money would you like to Withdraw?");
            scanf("%d", &withdraw);

            if (withdraw <= balance)
            {
                balance -= withdraw;

                printf("\nAfter your withdrawal you have %d Ruppes.\n", balance);
            }
            else
            {
                printf("You have insufficient funds.");
            }
            break;

        case 3:
            printf("You have %d Ruppes in your account currently", balance);
            break;

        case 4:
            printf("\n---------------------------------");
            printf("\n------Thanks for using ATM-------");
            printf("\n---------------------------------");
            exit(0);

        default:
            printf("Invalid Choice");
            break;
    }
    return balance;
}

int main()
{
    int balance = 10000, choice;
    char restart;

    printf("\n---------------------------------");
    printf("\n ----------ATM Machine-----------");
    printf("\n---------------------------------\n");
    printf("\nYour current balance is 10,000 Rupees.\n");

    while (1)

    {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("\nWhat would you like to do?");
        scanf("%d", &choice);

        balance = action(choice, balance);

        printf("\nWould you like to do any other transaction? (Y/N)");
        scanf(" %c", &restart);

        if (restart == 'Y' || restart == 'y')
        {
            continue;
        }
        else
        {
            printf("\n---------------------------------");
            printf("\n------Thanks for using ATM-------");
            printf("\n---------------------------------");

            return 0;
        }
    }
    return 0;
}