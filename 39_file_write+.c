#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *z_2;
    char text[1000];
    int ch;

    z_2 = fopen("z_2.txt", "w+");

    if (z_2 == NULL)
    {
        printf("Error: File Not Found.\n");

        return 1;
    }

    printf("\n\n\tEnter The Text :");

    fgets(text, sizeof(text), stdin);

    fputs(text, z_2);

    rewind(z_2);

    printf("\n\n\tFile When Read :");

    while ((ch = fgetc(z_2)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(z_2);

    return 0;
}