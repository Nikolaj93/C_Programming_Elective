#include <stdio.h>

int main()
{
    /*
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
    */

    /*
    // Assignment 3
    // There are other input methods, try them.
    // gets()
    // getchar()
    // char character;
    // char name[20];
    // gets(name);
    // character = getchar();
    printf("\n");
    printf("------------Assignment 3------------\n");
    char character;
    char name[20];
    gets(name);
    character = getchar();
    printf("%s %c", name, character);
    getchar();
     */

    /*
    // Assignment 4
    printf("\n");
    printf("------------Assignment 4------------\n");
    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < 12; ++i)
    {
        printf("Month no. %d contains %d days.. ", i+1, days[i]);
    }*/

    /*
    // Assignment 4a
    printf("\n");
    printf("------------Assignment 4a------------\n");
    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    while (i < 12)
    {
        printf("Month no. %d contains %d days.. ", i+1, days[i]);
        i++;
    }*/

    /*
    // Assignment 4b
    printf("\n");
    printf("------------Assignment 4b------------\n");
    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    do {
        printf("Month no. %d contains %d days.. ", i+1, days[i]);
        i++;
    } while (i < 12);*/

    /*// Assignment 5
    printf("\n");
    printf("------------Assignment 5------------\n");
    char Apple;
    char Banana;
    char Cherry;
    char Date;
    char Elderberry;

    if ()
    {

    } else
        */


    // Assignment 7
    printf("\n");
    printf("------------Assignment 7------------\n");

    #define MAXMSG 2
    struct Message // buffer for command
    {
        unsigned char data[7]; // number of possible
        unsigned char len; // number of positions in use
    };
    struct Message msg[MAXMSG]=
            {
                    { { 0xFF, 0,0xFF, 0, 0, 0, 0}, 3}, // idle msg
                    { { 0, 0, 0, 0, 0, 0, 0}, 3}, // loco Msg
            };

    /*
    msg[1].data[0] = 1;
    msg[1].data[1] = 2;
    msg[1].data[2] = 3;

    int locoAddr1 = msg[1].data[0];
    int data1 = msg[1].data[1];
    int xdata1 = msg[1].data[2];
    */
    /*
    int locoAddr1 = 0;
    int data1 = 1;
    int xdata1 = 2;

    msg[1].data[0] = locoAddr1;
    msg[1].data[1] = data1;
    msg[1].data[2] = xdata1;
    */
    /*
    printf("locoAddr 1 is: %d, data1 is: %d, xdata1 is: %d\n", locoAddr1, data1, xdata1);
    */

    /*
    // Assignment 8
    printf("\n");
    printf("------------Assignment 8------------\n");
    */

    // Assignment 9
    printf("\n");
    printf("------------Assignment 9------------\n");
    struct Locomotive {
        int id;
        char name[20];
        int speed;
        char direction[2];
        int light;
    };
    struct Locomotive trainOne ={1, "IC308", 100, "N", 0};
    struct Locomotive trainTwo ={2, "IC309", -100, "S", 1};

    void exercise9(struct Message message[MAXMSG]);


/*
    // Assignment 10
    printf("\n");
    printf("------------Assignment 10------------\n");
    struct Locomotive train1,train2,train3;
    */

    return 0;
}
