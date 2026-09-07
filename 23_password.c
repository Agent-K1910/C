// #include <stdio.h>
// int main()
// {
//     int password;

//     printf("\n\nPlease Enter the 4 Digit Password You Want:");
//     scanf("%d", &password);

//     if (password < 0 || password > 9999)
//     {
//         printf("\nDidnt you read the Title? Its 4 DIGITS ONLY\n");

//         return 1;
//     }

//     printf("\n-------------------------------------------");
//     printf("\n\nRemember Your Password and Put it Again.");
//     printf("\nYou Have 5 Tries to Put it Correctly Again.");
//     printf("\n-------------------------------------------\n");

//     for (int tries = 0; tries < 5; tries++)
//     {
//         int passcode;

//         printf("\nEnter the password:");
//         scanf("%d", &passcode);

//         if (passcode == password)
//         {
//             printf("\nCongratulations You Remembered Your Password.\n");
//             printf("Even tho You Just Made It like 10 Seconds Ago.\n");

//             break;
//         }
//         else
//         {


//             printf("\nYou have %d tries Left.", 4 - tries);
//         }
//         if (tries == 0)
//         {
//             printf("\nDidnt you Just Make Your Password.\n");
//         }
//     }

//     return 0;
// }



#include <stdio.h>

int main()
{
    int password;

    printf("\n\nPlease Enter the 4 Digit Password You Want: ");
    if (scanf("%d", &password) != 1) 
    {
        printf("\nInvalid input. Numbers only!\n");
        return 1;
    }

    if (password < 0 || password > 9999)
    {
        printf("\nDidnt you read the Title? Its 4 DIGITS ONLY\n");
        return 1;
    }

    printf("\n-------------------------------------------"
           "\n\nRemember Your Password and Put it Again."
           "\nYou Have 5 Tries to Put it Correctly Again."
           "\n-------------------------------------------\n");

    int tries; 
    for (tries = 0; tries < 5; tries++)
    {
        int passcode;

        printf("\nEnter the password: ");
        if (scanf("%d", &passcode) != 1)
        {
            printf("\nInvalid input! Numbers only.");
            while (getchar() != '\n'); 
            passcode = -1; 
        }

        if (passcode == password)
        {
            printf("\nCongratulations You Remembered Your Password."
                   "\nEven tho You Just Made It like 10 Seconds Ago.\n");
            break; 
        }
        else if (tries < 4) // Only print if there are actual tries remaining
        {
            printf("\nYou have %d tries Left.\n", 4 - tries);
        }
    }

    if (tries == 5)
    {
        printf("\n==============================================="
               "\nACCESS DENIED: You failed 5 times!"
               "\nYour account has been locked out."
               "\n===============================================\n");
    }

    return 0;
}
