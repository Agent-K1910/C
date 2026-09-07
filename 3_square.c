#include <stdio.h>

int square(int num)
{

    for (int i = 0; i < num; i++)
    {

        printf("\t");

        for (int j = 0; j < num; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}

int main()
{

    int num;

    printf("\n\tEnter How Much Length You Want :");
    while (1)
    {
        if (scanf("%d", &num) != 1 || num < 1)
        {
            printf("Enter Natural Number Only :");

            while (getchar() != '\n')
                ;
        }

        else
        {
            break;
        }
    }

    printf("\n\n");

    square(num);

    printf("\n");

    return 0;
}