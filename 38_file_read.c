#include <stdio.h>

int main()
{
    FILE *z_1;
    char ch;

    z_1 = fopen("z_1.txt", "r");

    if (z_1 == NULL)
    {
        printf("Error: File not found!\n");
        return 1;
    }

    while ((ch = fgetc(z_1)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(z_1);

    return 0;
}
