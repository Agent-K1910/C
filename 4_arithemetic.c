#include <stdio.h>
int main()
{
    int a, b;
    int add, sub, mul;

    printf("Enter value of A: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    float div;

    printf("-------------------------------\n");

    add = a + b;
    printf("addition of a & b is: %d \n", add);

    printf("-------------------------------\n");

    sub = a - b;
    printf("Subtraction of b form a is: %d \n", sub);

    printf("-------------------------------\n");

    mul = a * b;
    printf("Multiplication of a & b is: %d \n", mul);

    printf("-------------------------------\n");

    div = (float)a / b;
    printf("Division of A & b is : %.2f \n", div);

    return 0;
}