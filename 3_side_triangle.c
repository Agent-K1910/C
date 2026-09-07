#include <stdio.h>

int star(int i)
{
    for (int j = 0; j < i; j++)
    {
        printf(" * ");
    }

    return 0;
}

int space(int i, int num)
{

    for (int k = 2 * (num - i); k > 0; k--)
    {
        printf("   ");
    }

    return 0;
}

int main()
{
    int num, i, j;

    printf("\n\tEnter How Many Levels You Want :");
    while (1)
    {
        if (scanf("%d", &num) != 1 || num < 0)
        {
            printf("\n\tEnter Whole Number Only :");

            while (getchar() != '\n')
                ;
        }
        else
        {
            break;
        }
    }

    for (i = 1; i <= num; i++)
    {
        star(i);

        space(i, num);

        star(i);

        printf("\n");
    }

    for (i = num - 1; i >= 1; i--)
    {
        star(i);

        space(i, num);

        star(i);

        printf("\n");
    }

    return 0;
}