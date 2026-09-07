#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter value of a :");
    scanf("%d", &a);

    printf("Enter value of b :");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is bigger");
    }
    else
    {
        printf("b is bigger");
    }
    return 0;
}