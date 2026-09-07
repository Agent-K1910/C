#include <stdio.h>
int main()
{
    int s, m, e, g, h, t;
    float p;

    printf("Marks obtained in Science :");
    scanf("%d", &s);

    printf("Marks obtained in Maths :");
    scanf("%d", &m);

    printf("Marks obtained in English :");
    scanf("%d", &e);

    printf("Marks obtained in Gujarati :");
    scanf("%d", &g);

    printf("Marks obtained in Hindi :");
    scanf("%d", &h);

    if (s < 0 || m < 0 || e < 0 || g < 0 || h < 0 || s > 100 || m > 100 || e > 100 || g > 100 || h > 100)
    {
        printf("Marks obtained should be between 0 and 100");
        return 1;
    }

    printf("----------------------------------------\n");

    t = s + m + e + g + h;
    printf("Your got %d out of 500.\n", t);

    printf("----------------------------------------\n");

    p = (float)t / 500 * 100;
    printf("Your total percentage is %.2f\n", p);

    printf("----------------------------------------\n");

    if (p >= 35 && p <= 100)
    {
        printf("You passed your Grade\n");
    }
    else
    {
        printf("You failed your Grade\n");
    }

    if (p >= 80 && p <= 100)

    {
        printf("You got A grade\n");
    }

    if (p >= 60 && p <= 80)

    {
        printf("You got B grade\n");
    }

    if (p >= 35 && p <= 60)

    {
        printf("You got C grade\n");
    }

    if (p >= 0 && p <= 35)

    {
        printf("You got F grade\n");
    }

    return 0;
}