#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FULL_NAME 100

struct INFO
{
    int id;
    char name[FULL_NAME];
    float score;
};

int main()
{
    FILE *game;

    int id;
    char name[FULL_NAME];
    float score;

    srand(time(NULL));

    printf("\n\n\tEnter Your Id :");
    scanf("%d", &id);

    printf("\tEnter Your Name :");
    scanf("%100s", name);

    score = rand() % 100;
    printf("\tYour Score Is :%.2f\n", score);

    struct INFO player1;
    struct INFO player2;

    player1.id = id;

    strncpy(player1.name, name, FULL_NAME - 1);
    player1.name[FULL_NAME - 1] = '\0';
    player1.score = score;

    game = fopen("game.bin", "wb");

    if (game == NULL)
    {
        printf("\n\tError :File Not Found.");

        return 1;
    }
    fwrite(&player1, sizeof(struct INFO), 1, game);

    fclose(game);

    game = fopen("game.bin", "rb");

    if (game == NULL)
    {
        printf("\n\tError :File Not Found.");

        return 1;
    }

    fread(&player2, sizeof(struct INFO), 1, game);

    fclose(game);

    printf("\nReading The File :\n");

    printf("\n\n\tYour ID: %d\n\tYour Name: %s\n\tYour Score: %.2f\n", player2.id, player2.name, player2.score);

    return 0;
}