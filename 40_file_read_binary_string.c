#include <stdio.h>

int main()
{
    FILE *z_5;

    char num[100];

    size_t size;

    z_5 = fopen("z_5.bin", "rb");

    if (z_5 == NULL)
    {
        printf("\n\tError :File Not Found.\n");

        return 1;
    }

    size = fread(num, 1, sizeof(num) - 1, z_5);

    num[size] = '\0';

    printf("\n\n\tFile Content: %s\n\n", num);

    fclose(z_5);

    return 0;
}