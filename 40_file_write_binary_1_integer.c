#include <stdio.h>
#include <string.h>

int main()
{
    FILE *z_3;

    int num;

    printf("Enter Whole Number You Want :");

    while (1)
    {
        if (fgets(num, sizeof(num), stdin) == NULL)
        {
            printf("\n\tEnter Whole Number Only :");

            while (getchar() != '\n')
                ;
        }
    }
    z_3 = fopen("z_3.bin", "wb");

    if (z_3 == NULL)
    {
        printf("\n\tError :File Not Found.\n");

        return 1;
    }

    fwrite(&num, sizeof(int), 1, z_3);

    printf("\n\tBinary File Written Sucessfully\n");

    fclose(z_3);

    return 0;
}