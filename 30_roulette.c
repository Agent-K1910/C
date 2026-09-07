#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main()
{
    int num, i, a, buck = 10000, bet;
    char colour;

    printf("\n\n-------------------"
           "\nWelcome To Roulette"
           "\n-------------------");

    printf("\nYour have %d to Bet", buck);

    printf("\n\nEnter Betting Amount :");
    scanf("%d", &bet);

    printf("Bet on The Colour (R/B/G) :");
    scanf(" %c", &colour);

    return 0;
}