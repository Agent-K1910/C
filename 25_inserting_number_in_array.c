#include <stdio.h>
int main()
{

    int a[100];
    int num, i, new, position;

    printf("\n-------------------------------\n"
           "Number Inseter in Defined Array"
           "\n-------------------------------\n");

    printf("\nHow many Number Would You Like in Your Array?");
    if (scanf("%d", &num) != 1 || num <= 0 || num > 100)
    {
        printf("\nPlease Enter Valid Value (1-100)\n");

        return 1;
    }

    for (i = 0; i < num; i++)
    {
        printf("\nEnter Number %d : ", i + 1);

        if (scanf("%d", &a[i]) != 1)
        {
            printf("\nPlease Enter Valid Number.\n");

            return 1;
        }
    }

    printf("\nEnter the value You want to Add :");
    scanf("%d", &new);

    printf("\nEnter Index Where You want Value to be in :");
    scanf("%d", &position);

    if (position < 0 || position > num || position > 100)
    {
        printf("Enter Valid Position.");

        return 1;
    }
    else
    {
        for (i = num; i > position; i--)
        {
            a[i] = a[i - 1];
        }
        a[position]=new;
    }
    return 0;
}