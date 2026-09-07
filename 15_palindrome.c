#include <stdio.h>
int main()
{
    int num,temp=0,r,copy;

    printf("\nNumber Palindrome Checker.");
    printf("\n-----------------------------------------\n");
    printf("\nEnter  the number you want to check the palindrome of :");
    scanf("%d", &num);
    copy=num;
   while (num!=0)
   {
        r=num%10;
        num=num/10; 
        temp=temp * 10 + r;
   }
   
    // do
    // {
    //     a = n % 10;
    //     n = n * 10 + a;
    //     printf("%d", n);

    // } while (n <= 0);

    if (copy == temp)
    {
        printf("You have a palindrome.\n");
    }
    else
    {
        printf("You don't have a palindrome.\n");
    }
    return 0;
}