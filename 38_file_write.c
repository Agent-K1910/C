#include <stdio.h>

int main()
{
    FILE *z_1;
    char text[1000];

    z_1 = fopen("z_1.txt", "w");

    if (z_1 == NULL)
    {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("\n\tEnter Text :");

    gets(text);

    fputs(text, z_1);

    fclose(z_1);

    printf("\n\tText written to file successfully.\n");
    return 0;
}
