#include <stdio.h>
#include "utils.h"

int main()
{
    int a[100];
    int i, j;

    printf("\n-----------------------------\n"
           "Find Duplicate Number in Array"
           "\n-----------------------------\n");

    // printf("\n Enter Amount of Numbers Would You Like in Array: ");
    // if (scanf("%d", &num) != 1 || num < 0 || num > 100)
    // {
    //     printf("\nPlease Enter a Number Between 1-100.\n");

    //     return 1;
    // }

    // for (i = 0; i < num; i++)
    // {
    //     printf("Enter Number %d: ", i + 1);
    //     if (scanf("%d", &a[i]) != 1 || a[i] < 0)
    //     {
    //         printf("\nPlease Enter a Positive Number.\n");

    //         return 1;
    //     }
    // }

    int num = getNumber("Enter array size: ");

    inputArray(a, num);

    int duplicate = 0;

    for (i = 0; i < num; i++)
    {
        printf("value  of i : %d \n", i);
        for (j = i + 1; j < num; j++)
        {
            printf("value  of j : %d \n", j);
            if (a[j] == a[i])
            {
                printf("\nThe Duplicate Number is: %d \n", a[i]);

                duplicate = 1;

                break;
            }
        }
    }

    if (duplicate == 0)

    {
        printf("\nYou Have No Duplicates in Your Array.");
    }

    return 0;
}