#include <stdio.h>
int main()
{
    int y;
    float a, b, o;

    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("--------------------------------\n");

    printf("Choose the Operator You Want:\n");
    scanf("%d", &y);

    printf("--------------------------------\n");

    printf("Enter both the Numbers:\n");
    scanf("%lf %lf", &a, &b);

    switch (y)
    {
        case 1:
            o = a + b;
            printf("Addition of Both numbers is :%.2lf", o);
            break;
        case 2:
            o = a - b;
            printf("Subtraction of Both numbers is :%.2lf", o);
            break;

        case 3:
            o = a * b;
            printf("Multiplication of Both numbers is :%.2lf", o);
            break;
        case 4:
            o = a / b;
            printf("Division of Both numbers is :%.2lf", o);
            break;
        default:
            printf("Please select only from the Operators , being (1,2,3,4)");
    }

    return 0;
}