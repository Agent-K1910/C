#include <stdio.h>

int upper_diamond(int levels)
{
    for (int i = 1; i <= levels; i++)
    {

        for (int j = i; j < levels; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");

            if (j < i - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int lower_diamond(int levels)
{

    for (int i = levels - 1; i >= 1; i--)
    {

        for (int j = i; j < levels; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");

            if (j < i - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int num;

    printf("\n\n\tEnter Number Of Levels You Want :");

    while (1)
    {
        if (scanf("%d", &num) != 1 || num < 1)
        {
            printf("\n\n\tEnter Number Greater Than 1 Only :");

            while (getchar() != '\n')
                ;
        }
        else
        {
            break;
        }
    }

    int levels = num;

    upper_diamond(levels);
    lower_diamond(levels);

    return 0;
}