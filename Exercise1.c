#include <stdio.h>

int main( )
{
    // Assignment 1
    int amount;
    double price, totalPrice;
    double vat, vatAmount, finalPrice;

    printf("------------Assignment 1------------\n");

    amount = 41112;
    printf("amount %i stk\n", amount);

    price = 11.48;
    printf("price %.2lf kr\n", price);

    totalPrice = amount * price;
    printf("total %.2lf kr (without tax)\n", totalPrice);
    printf("----------------------------------\n");

    vat = 25;
    printf("vat %.0lf %%\n", vat);

    vatAmount = totalPrice * 0.25;
    printf("tax amount is %.2lf kr\n", vatAmount);
    printf("----------------------------------\n");

    finalPrice = totalPrice * 1.25;
    printf("final price with tax %.2lf kr\n", finalPrice);
    printf("==================================\n");


    // Assignment 2
    printf("\n");
    printf("------------Assignment 2------------\n");
    int number;
    char character;
    char string[20];
    scanf("%s %c %d", &string, &character, &number);
    printf("%s %c %d", string, character, number);
    printf("==================================\n");


    // Assignment 3
    printf("\n");
    printf("------------Assignment 3------------\n");
    char character;
    char name[20];
    gets(name);
    character = getchar();

    printf("==================================\n");


    // Assignment 4
    printf("\n");
    printf("------------Assignment 4------------\n");


    return 0;
}
