#include <stdio.h>

int main()
{
    FILE *z_3;

    int num;

    z_3 = fopen("z_3.bin", "rb");

    if (z_3 == NULL)
    {
        printf("\n\tError: File Not Found.\n");

        return 1;
    }

    fread(&num, sizeof(int), 1, z_3);

    printf("\n\tNumber in File is :%d\n", num);

    fclose(z_3);

    return 0;
}