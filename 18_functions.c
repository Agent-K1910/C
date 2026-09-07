#include <stdio.h>

int sum()
{
    int num1, num2, add;

    printf("\nEnter the First number : ");
    scanf("%d", &num1);

    printf("\nEnter the Second number : ");
    scanf("%d", &num2);

    add = num1 + num2;

    return add;
}

int main()
{
    int a;

    a = sum();

    printf("\nThe sum of both your numbers is :%d\n", a);

    return 0;
}