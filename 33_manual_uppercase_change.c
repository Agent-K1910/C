#include <stdio.h>
int main()
{
    int i;
    char temp, sentence[1000];

    printf("\n\nEnter Your String :");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        temp = sentence[i];

        if (temp >= 'a' && temp <= 'z')
        {
            sentence[i] -= 32;
        }

        else if (temp >= 'A' && temp <= 'Z' || temp == ' ' || temp == '\n' || temp == '\t')
        {
        }

        else
        {
            printf("\n\nEnter Valid Input.\n");

            return 1;
        }
    }
    for (i = 0; sentence[i] != '\0'; i++)
    {
        printf("%c", sentence[i]);
    }
    return 0;
}