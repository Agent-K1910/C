#include <stdio.h>
int main()
{
    int n, t = 1;

    printf("\nEnter the Number You Want The Table Of: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\nDo you seriously want a table of %d?\n", n);

        return 1;
    }
    printf("\nTable of %d:", n);
    printf("\n-----------\n");

    // do
    // {

    //     printf("%d x %d = %d\n", n, t, n * t);
    //     t++;
    // } while (t <= 10);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    

    return 0;
}