#include <stdio.h>
int main()
{
    int number, integer, flag = 0;

    printf("\n---------------------------------");
    printf("\n------Prime Number Guesser-------");
    printf("\n---------------------------------\n");

    printf("\nWrite the number you want to know about:");
    scanf("%d", &number);

    if (number == 0 || number == 1)
    {
        flag = 1;
    }

    for (integer = 2; integer <= number / 2; integer++)
    {
        if (number % integer == 0)
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("\n%d is Prime.\n", number);
    }
    else
    {
        printf("\n%d is not Prime.\n", number);
    }
    return 0;
}