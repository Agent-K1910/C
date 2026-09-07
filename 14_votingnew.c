#include <stdio.h>
int main()

{
    int p, c, B = 0, C = 0, A = 0, T = 0, O = 0;

    printf("How many people are voting?\n");
    scanf("%d", &p);

    do
    {
        printf("-------------------------------\n");
        printf("1. BJP\n");
        printf("2. Congress\n");
        printf("3. AAP\n");
        printf("4. TMC\n");
        printf("5. Others\n");
        printf("-------------------------------\n");

        printf("Which party would you like to vote?");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            if (c == 1)
                printf("You voted for BJP.\n");
            B++;
            break;
        case 2:
            if (c == 2)
                printf("You voted for Congress.\n");
            C++;
            break;
        case 3:
            if (c == 3)
                printf("You voted for AAP.\n");
            A++;
            break;
        case 4:
            if (c == 4)
                printf("You voted for TMC.\n");
            T++;
            break;
        case 5:
            if (c == 5)
                printf("You voted for Others.\n");
            O++;
            break;
        default:
            printf("Please enter valid Candidate number.\n");
            p++;
        }
        p--;
    } while (p > 0);

    if (B > C && B > A && B > T && B > O)
    {
        printf("BJP won the election.\n");
    }
    else if (C > B && C > A && C > T && C > O)
    {
        printf("Congress won the election.\n");
    }
    else if (A > B && A > C && A > T && A > O)
    {
        printf("AAP won the election.\n");
    }
    else if (T > C && T > A && T > B && T > O)
    {
        printf("TMC won the election.\n");
    }
    else if (O > C && O > A && O > T && O > B)
    {
        printf("Others won the election.\n");
    }
    else
    {
        printf("It is a draw.\n");
    }

    return 0;
}