#include <stdio.h>
int main()
{
    int y;
    double a, b, c, d, e;

    printf("Enter the year you would like to know information about:");
    if (scanf("%d", &y) != 1 || y < 0)
    {
        printf("Enter interger value only.....");
        return 1;
    }

    if (y <= 0)
    {
        printf("Please enter valid number of years.\n");

        return 1;
    }

    printf("----------------------------------------\n");

    a = 12 * y;
    printf("Number of Months Till your Year : %.2f\n", a);

    b = (365 * y) + ((float)y / 4);
    printf("Number of Days Till your Year : %.2f\n", b);

    printf("----------------------------------------\n");

    c = b * 24;
    d = c * 60;
    e = d * 60;
    printf("Number of Hours Till your Year : %.2f\n", c);
    printf("Number of Minutes Till your Year : %.2f\n", d);
    printf("Number of Seconds Till your Year : %.2f\n", e);

    printf("----------------------------------------\n");

    if (y % 400 == 0)
    {
        printf("This Year is a Leap Year.\n");
    }
    else if (y % 100 == 0)
    {
        printf("This Year is not a Leap Year.\n");
    }
    else if (y % 4 == 0)
    {
        printf("This year is a Leap Year.\n");
    }
    else
        printf("This year is not a Leap Year.\n");

    return 0;
}