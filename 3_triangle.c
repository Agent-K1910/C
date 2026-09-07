#include <stdio.h>
int main()
{
    int levels;

    printf("\n\n\tHow many levels do you want :");
    scanf("%d", &levels);

    for (int i = 1; i <= levels; i++)
    {
        for (int j = i; j < levels; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");

            if (j < i - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// -----------------------------------------
// Side Pyramid (Decent method)
// -----------------------------------------

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of levels you want:");
//     scanf("%d",&num);
//     for (int i = 0; i <num ; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// -----------------------------------------
// 1  to 10 Pyramid (Caveman method)
// -----------------------------------------

// #include <stdio.h>
//  int main()
//  {
//      int a;

//     printf("Insert number of levels you want in the triangle: ");
//     scanf("%d", &a);

//     if (a < 0 || a > 10)
//     {
//         printf("Number of levels should be between 1 and 10 \n");
//         return 1;
//     }

//     if (a < 2)
//     {
//         printf("                   *\n");
//         return 1;
//     }

//     if (a < 3)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         return 1;
//     }

//     if (a < 4)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         return 1;
//     }

//     if (a < 5)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         return 1;
//     }

//     if (a < 6)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         return 1;
//     }

//     if (a < 7)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         printf("         *   *   *   *   *   * \n");
//         return 1;
//     }

//     if (a < 8)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         printf("         *   *   *   *   *   * \n");
//         printf("       *   *   *   *   *   *   * \n");
//         return 1;
//     }

//     if (a < 9)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         printf("         *   *   *   *   *   * \n");
//         printf("       *   *   *   *   *   *   * \n");
//         printf("     *   *   *   *   *   *   *   * \n");
//         return 1;
//     }

//     if (a < 10)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         printf("         *   *   *   *   *   * \n");
//         printf("       *   *   *   *   *   *   * \n");
//         printf("     *   *   *   *   *   *   *   * \n");
//         printf("   *   *   *   *   *   *   *   *   *\n");
//         return 1;
//     }

//     if (a < 11)
//     {
//         printf("                   *\n");
//         printf("                 *   * \n");
//         printf("               *   *   * \n");
//         printf("             *   *   *   * \n");
//         printf("           *   *   *   *   * \n");
//         printf("         *   *   *   *   *   * \n");
//         printf("       *   *   *   *   *   *   * \n");
//         printf("     *   *   *   *   *   *   *   * \n");
//         printf("   *   *   *   *   *   *   *   *   *\n");
//         printf(" *   *   *   *   *   *   *   *   *   * \n");
//         return 1;
//     }
//     return 0;
// }