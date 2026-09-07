#include <stdio.h>
int main()
{
    int x[] = {12, 45, 78, 89, 56, 23, 26, 48, 15, 79, 46, 13, 97, 62, 32, 65};

    size_t size = sizeof(x) / sizeof(x[0]);

    printf("size :%d \n", size);

    for (int i = 0; i < size / 2; i++)
    {
        int temp = x[i];
        x[i] = x[size - 1 - i]; // Mirror index from the end
        x[size - 1 - i] = temp;
    }

    // int temp[16] = {};

    // int j = 0;

    // for (int i = size - 1; i >= 0; i--)
    // {
    //     temp[j] = x[i];

    //     printf("check value %d : %d \n", i, x[i]);

    //     j++;
    // }

    // printf("\n--- Reversed Array ---\n");

    for (int i = 0; i < size; i++)
    {
        printf("value %d : %d \n", i, x[i]);
    }

    return 0;
}
