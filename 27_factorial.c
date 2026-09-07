#include <stdio.h>
int main()
{
    int i, num;
    double a;

    printf("\n--------------------\n"
           "\nFactorial Calcualtor\n"
           "\n--------------------");

    printf("\n\nEnter the Number You Want the Factorial of :");
    if (scanf("%d", &num) != 1 || num <= 0 || num > 100)
    {
        printf("\nPlease Enter Number Bewtween 1 & 100\n");

        return 1;
    }

    a = num;

    for (i = num - 1; i >= 1; i--)
    {
        a = a * i;
    }

    printf("\n\nThe Value of the Factorial is %.0f. ", a);

    return 0;
}