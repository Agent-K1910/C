#include <stdio.h>

void clear_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    int x, y, value, find, found = 0;

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
                printf("\n\tEnter Value In Index (%d,%d) :", j, i);
                if (scanf("%d", &value) == 1 && value >= 0)
                {
                    a[j][i] = value;

                    break;
                }

                printf("\n\n\tEnter Whole Numbers Only.\n");
                if (getchar() != '\n')
                {
                }
            }
        }
    }

    printf("\n\n\tEnter Number You Want To Find :");
    while (scanf("%d", &find) != 1)
    {
        printf("\n\n\tEnter Whole Numbers Only.");
        printf("\n\n\tEnter Number You Want To Find :");
        if (getchar() != '\n')
        {
        }
    }

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            if (find == a[j][i])
            {
                printf("\n\n\tThe Value Is In Index (%d,%d).\n", j, i);

                found = 1;
            }
        }
    }
    if (found == 0)
    {
        printf("\n\nInput Doesn't Exist In Array.\n");
    }
    return 0;
}
