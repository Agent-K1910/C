#include <stdio.h>

int main()
{
    double cookies = 5;
    int people = 2;
    double share;

    // Incorrect: Evaluates to 2, then assigns 2.0 to share
    share = cookies / people;
    printf("Incorrect: %.1f\n", share);

    // Correct: Casts 'cookies' to double first, forcing decimal division
    share = (double)cookies / people;
    printf("Correct: %.1f\n", share); // Outputs 2.5

    char letter = 'A';
    int ascii_value = (int)letter; // Converts 'A' to 65

    printf("ascii_value : %d\n", ascii_value);

    return 0;
}