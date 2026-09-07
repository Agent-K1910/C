#include <stdio.h>
int main()
{
    int x, y, value;

    printf("\n\nEnter Number Of Columns You'd Like In Array :");
    if (scanf("%d", &x) != 1 || x < 1)
    {
        printf("\nEnter Natural Numbers Only.\n");

        return 1;
    }

    printf("\n\nEnter Number Of Rows You'd Like In Array :");
    if (scanf("%d", &y) != 1 || y < 1)
    {
        printf("\nEnter Natural Numbers Only.\n");

        return 1;
    }

    int a[y][x];

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            while (1)
            {
                printf("\n\tEnter Value In Index (%d,%d) :", i, j);
                if (scanf("%d", &value) == 1 || value >= 0)
                {
                    a[j][i] = value;

                    break;
                }
                printf("\n\n\tEnter Whole Numbers Only.\n");
            }
            while (getchar() != '\n')
                ;
        }
    }

    printf("\n\n");

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {

            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}