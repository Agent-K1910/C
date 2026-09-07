#include <stdio.h>
int main()
{
    int A;
    char V[50], N[50];

    printf("Enter your Name :");
    scanf("%s", N);

    printf("Enter your Age :");
    scanf("%d", &A);

    if (A < 0)
    {
        printf("You havent been born yet");
        return 1;
    }
    else if (A < 18)
    {
        printf("You arent  elligible for voting");
        return 1;
    }

    else if (A >= 18 && A <= 100)

    {
        printf("Which party would you like to give your vote to?\n");
        scanf("%s", V);
    }

    else
    {
        printf("You should be dead.\n");
        return 1;
    }

    printf("---------------------------------------\n");
    printf("Thank you %s for voting %s. \n", N, V);

    return 0;
}