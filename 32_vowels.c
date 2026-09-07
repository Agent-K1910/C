#include <stdio.h>
int main()

{
    char sentence[1000];
    int i, temp, vowels = 0, consonants = 0, digits = 0, spaces = 0, tabs = 0, enter = 0;

    printf("Enter Your String :");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        temp = sentence[i];

        if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' || temp == 'i' || temp == 'I' || temp == 'o' || temp == 'O' || temp == 'u' || temp == 'U')
        {
            vowels++;
        }
        else if (temp >= 'A' && temp <= 'Z' || temp >= 'a' && temp <= 'z')
        {
            consonants++;
        }
        else if (temp >= '0' && temp <= '9')
        {
            digits++;
        }
        else if (temp == ' ')
        {
            spaces++;
        }
        else if (temp == '\t')
        {
            tabs++;
        }
        else if (temp == '\n')
        {
            enter++;
        }
        else
        {
            printf("Enter Valid Characters");

            return 1;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("New Lines: %d\n", enter);

    return 0;
}