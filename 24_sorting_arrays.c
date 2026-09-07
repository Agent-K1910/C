#include <stdio.h>
int main()
{

    int a[100];
    int num, i, j;

    printf("\n-----------------------------\n"
           "  Array Sorter (Asending Order)"
           "\n-----------------------------\n");

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

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1 - i; j++)

            if (a[j] > a[j + 1])
            {

                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
    }

    for (i = 0; i < num; i++)
    {
        printf("\n %d  ", a[i]);
    }

    return 0;
}