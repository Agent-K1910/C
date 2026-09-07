#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter Number you  want(A): ");
    scanf("%d", &a);

    printf("Enter another Number you  want(B): ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValue of (A) is :%d", a);

    printf("\nValue of (B) is :%d", b);

    return 0;
}