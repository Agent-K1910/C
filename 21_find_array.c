#include <stdio.h>
int main()
{

    printf("\n-------------");
    printf("\nNumber Finder");
    printf("\n-------------\n");

    int a[5];
    int find, i;

    for (i = 0; i <= 4; i++)
    {

        printf("\nEnter %d Number :",i+1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Number You want to find:");
    scanf("%d", &find);

    int found = 0;

    for (i = 0; i <= 4; i++)
    {
        if (find == a[i])
        {
            printf("\nThe Number is %d & it is in Index %d. \n", find, i);

            found = 1;

            break;
        }
    }

    if (found == 0)
    {
        printf("\nThe number %d was not found in the array.\n", find);
    }
    return 0;
}