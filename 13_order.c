#include <stdio.h>
int main()
{

  int i, v, p = 0;
  char a;

  printf("----------------------------\n");
  printf("Welcome to Starbucks\n");
  printf("----------------------------\n");

  do
  {
    printf("The items in today's menu are:\n");
    printf("1. Cold Brew Coffee-----------------------------400\n");
    printf("2. Caramel Macchiato----------------------------450\n");
    printf("3. Lava Chip Frappuccino------------------------500\n");
    printf("4. Matcha Green Tea Latte-----------------------550\n");
    printf("5. Mocha Latte----------------------------------600\n");
    printf("6. Strawberry Acai Refresher--------------------650\n");

    printf("\nChoose your Item:");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
      printf("\nHow many Cold Brew Coffees would you like? ");
      scanf("%d", &v);
      p += 400 * v;

      break;
    case 2:
      printf("\nHow many Caramel Macchiatos would you like? ");
      scanf("%d", &v);
      p += 450 * v;

      break;

    case 3:
      printf("\nHow many Java Chip Frappuccinos would you like? ");
      scanf("%d", &v);
      p += 500 * v;

      break;

    case 4:
      printf("\nHow many Matcha Green Tea Lattes would you like? ");
      scanf("%d", &v);
      p += 550 * v;

      break;

    case 5:
      printf("\nHow many Mocha Lattes would you like? ");
      scanf("%d", &v);
      p += 600 * v;

      break;

    case 6:
      printf("\nHow many Strawberry Acai Refreshers would you like? ");
      scanf("%d", &v);
      p += 650 * v;

      break;

    default:
      printf("\nPlease select a valid item you want.\n");
    }
    printf("\nWould you like to Order anything else? (Y/N).");
    scanf(" %c", &a);
  } while (a == 'Y' || a == 'y');

  printf("----------------------------\n");
  printf("Thank you for ordering!\n");
  printf("----------------------------\n");
  printf("Your Total is %d/-\n", p);

  return 0;
}