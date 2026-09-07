#include <stdio.h>
int main()
{
    int a[100];
    int num, i, del, j;

    printf("\n-----------------------------\n"
           "Delete Number in Array"
           "\n-----------------------------\n");

    printf("\n Enter Amount of Numbers Would You Like in Array:");
    if (scanf("%d", &num) != 1 || num < 0 || num > 100)
    {
        printf("\nPlease Enter a Number Between 1-100.\n");

        return 1;
    }

    for (i = 0; i < num; i++)
    {
        printf("\nEnter Index %d : ", i);
        if (scanf("%d", &a[i]) != 1 || a[i] < 0)
        {
            printf("\nPlease Enter a Positive Number.\n");

            return 1;
        }
    }
    
    
    printf("\nEnter the Index You Want Deleted :");
    scanf("%d", &del);
    

    for (i = del; i < num-1; i++)
    {

        // for (j = i + 1; j < num; j++)
        // {
            a[i] = a[i + 1];
        // }
    }
    num--;

    printf("\nYour Array After Deletion is:");

    for (i = 0; i < num; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }

    return 0;
}