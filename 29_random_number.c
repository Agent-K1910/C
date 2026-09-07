#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main()
{
    int num, a, i, repeat = 5;
    while (repeat > 0)
    {
        printf("Enter Number Between 0 to 99.");
        if (scanf("%d", &a) != 1 || a < 0 || a > 99)
        {
            printf("Its 0 to 99 NUMBERS ONLY.");

            while (getchar() != '\n')
                ;

            continue;
        }

        srand(time(NULL));

        num = rand() % 100;

        printf("\n\n\t\tGuessing The Number : \n\t\t\t");

        for (i = 0; i < 5; i++)
        {
            Sleep(500);

            printf(".....");
        }
        if (num == a)
        {
            printf("The Number Was : %d\n", num);
            printf("\n\nYou Win.");

            return 0;
        }
        else
        {
            printf("The Number Was : %d\n", num);
            printf("\n\nYou Lose.");
        }

        repeat--;

        printf("\n\nYou Have %d Tries Left.", repeat);
    }

    return 0;
}