#include <stdio.h>
int main()
{
    int num, temp, sum = 0;

    printf("\n\n\tEnter The Numbers Your Want Sum Of :");
    if (scanf("%d", &num) != 1)
    {
        printf("\n\tEnter Numbers Only.\n");

        return 1;
    }

    for (; num > 0; num /= 10) 
    {
        temp = num % 10;
        sum += temp;
    }

    printf("\n\n\tThe Sum Of All Digits Is :%d\n", sum);
    return 0;
}


// ----------------------------------------
//          Robot Code (Not Mine)
// ----------------------------------------
// #include <stdio.h>
// #include <stdlib.h> // Needed for the abs() function

// void clear_buffer() {
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF);
// }

// int main() {
//     int num, temp, sum = 0;

//     printf("\n\tEnter The Number You Want The Sum Of Digits For: ");
//     if (scanf("%d", &num) != 1) {
//         printf("\tError: Enter Numbers Only.\n");
//         return 1;
//     }

//     // Convert to absolute value so it works perfectly for negative numbers
//     int working_num = abs(num); 

//     // Loop runs as long as working_num is greater than 0
//     for (; working_num > 0; working_num /= 10) {
//         temp = working_num % 10;
//         sum += temp;
//     }

//     printf("\tThe Sum Of All Digits In %d Is: %d\n", num, sum);
//     return 0;
// }