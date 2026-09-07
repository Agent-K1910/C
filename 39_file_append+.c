#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *z_2;

    char text[1000], ch;

    z_2 = fopen("z_2.txt", "a+");

    if (z_2 == NULL)
    {
        printf("Error: File Not Found.");

        return 1;
    }

    printf("Enter Text To Append :");
    fgets(text, sizeof(text), stdin);

    fputs(text, z_2);

    rewind(z_2);

    while ((ch = fgetc(z_2)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(z_2);

    return 0;
}