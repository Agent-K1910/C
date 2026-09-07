#include <stdio.h>
#include <string.h>

int main()
{
    FILE *z_5;

    char num[1000];

    printf("\n\tEnter content :");
    fgets(num, sizeof(num), stdin);

    size_t size = strlen(num);

    z_5 = fopen("z_5.bin", "wb");

    if (z_5 == NULL)
    {
        printf("\n\tError: File Not Found.\n");

        return 1;
    }

    printf("\n\tSize Of Characters is %zu.\n", size-1);

    fwrite(&num, sizeof(char), size, z_5);

    fclose(z_5);

    return 0;
}