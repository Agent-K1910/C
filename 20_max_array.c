#include <stdio.h>
int main()
{

    printf("\n---------------------");
    printf("\nMaximum Number Finder");
    printf("\n---------------------\n");

    int a[5];
    int max;

    for (int i = 0; i <= 4; i++)
    {
        printf("\nEnter %d Number :",i+1);
        if(scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input, please enter a valid number.\n");
            while (getchar() != '\n'); 
            i--;
            continue;
        }

        if (i == 0)
        {
            max = a[0];
        }

        if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("\nThe greatest number is:%d\n", max);

    return 0;
}