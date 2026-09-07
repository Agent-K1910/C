#include <stdio.h>
int main()
{
    int a;

    printf("\n\tEnter Number :");
    scanf("%d", &a);

    int *ptr = &a;

    printf("\n\n\tNumber : %u \n", a);

    printf("\n\tAddress Of Number : %u \n", &a);

    printf("\n\tValue Of Pointer: %u \n", ptr);

    printf("\n\tValue on Address %u : %u \n", ptr, *ptr);

    printf("\n\tAddress Of Pointer: %u \n", &ptr);

    return 0;
}