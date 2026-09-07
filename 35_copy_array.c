#include <stdio.h>
int main()
{
    int x, y, i, j, value;

    printf("\n\n\tEnter Number Of Columns You'd Like In Array :");
    if (scanf("%d", &x) != 1 || x < 1)
    {
        printf("\n\tEnter Natural Numbers Only.\n");

        return 1;
    }

    printf("\n\n\tEnter Number Of Rows You'd Like In Array :");
    if (scanf("%d", &y) != 1 || y < 1)
    {
        printf("\n\tEnter Natural Numbers Only.\n");

        return 1;
    }

    int a[y][x];

    for (j = 0; j < y; j++)
    {
        for (i = 0; i < x; i++)
        {
            while (1)
            {
                printf("\n\tEnter Value On Index (%d,%d)", j, i);
                if (scanf("%d", &value) != 1 || value < 0)
                {
                    printf("\n\n\tEnter Whole Numbers Only.\n");

                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    a[j][i] = value;

                    break;
                }
            }
        }
    }

    printf("\n\n\tYour Array Looks Like This:\n");

    for (j = 0; j < y; j++)
    {
        for (i = 0; i < x; i++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}