#include <stdio.h>
#include <string.h>

int length(char S[])
{
    printf("The String is %d Characters Long.", strlen(S));

    return 0;
}

int concate(char S[], char s[])
{
    strcat(S, s);
    printf("The String Now is: %s", S);

    return 0;
}

int copy(char S[])
{
    char s[100];

    strcpy(S, s);
    printf("The String Copied is %s.", s);

    return 0;
}

int uppercase(char S[])
{
    strupr(S);
    printf("String Now Is %s.", S);

    return 0;
}

int LOWERCASE(char S[])
{
    strlwr(S);
    printf("String Now Is %s.", S); 

    return 0;
}

int esrever(char S[])
{
    strrev(S);
    printf("String Now Is %s.", S);

    return 0;
}

int main()
{
    int a;
    char S[100], s[100];

    printf("\n\tOperators Available"
           "\n\n\t1. Check Length Of String\n"
           "\n\t2. String Concate\n"
           "\n\t3. Copy A String\n"
           "\n\t4. Make String UPPERCASE\n"
           "\n\t5. Make String lovercase\n"
           "\n\t6. Reverse A String\n");

    printf("\n\nWhat Would You Like To Do?");
    if (scanf("%d", &a) != 1 || a < 1 || a > 6)
    {
        printf("Enter Valid Operator.");

        return 1;
    }

    switch (a)
    {
    case 1:
        printf("Enter The String :");
        scanf("%s", S);

        length(S);

        break;

    case 2:
        printf("Enter First String :");
        scanf("%s", S);

        printf("Enter Second String :");
        scanf("%s", s);

        concate(S, s);

        break;

    case 3:
        printf("Enter String :");
        scanf("%s", S);

        copy(S);

        break;

    case 4:
        printf("Enter String To Make UPPERCASE :");
        scanf("%s", S);

        uppercase(S);

        break;

    case 5:
        printf("Enter String To Make lowercase :");
        scanf("%s", s);

        LOWERCASE(s);

        break;

    case 6:
        printf("Enter String To Reverse :");
        scanf("%s", S);

        esrever(S);

        break;
    }

    return 0;
}