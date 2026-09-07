#include <stdio.h>
int main()
{
    int a;
    char g;

    printf("Enter M for Male & F for Female:");
    if ((scanf("%c", &g)) && (g != 'm') || (g != 'M') || (g != 'f') || (g != 'F'))
    {
        printf("Enter valid gender.");

        return 1;
    }

    printf("Enter your age:");
    if ((scanf("%d", &a) != 1) || a < 0)
    {
        printf("Enter valid age.");

        return 1;
    }

    if ((g == 'M' || g == 'm') && a >= 21)
    {
        printf("------------------------------------\n");

        printf("You are eligible for marriage.\n ");
    }

    else if ((g == 'F' || g == 'f') && a >= 18)
    {
        printf("------------------------------------\n");

        printf("You are eligible for marriage.\n ");
    }

    else
    {
        printf("------------------------------------\n");

        printf("You are not eligible for marriage.\n");
    }

    return 0;
}