#include <stdio.h>
#include "Exercises7-11.h"

#define MAXMSG 2

/*
struct Message msg[MAXMSG]=
        {
                { { 0xFF, 0,0xFF, 0, 0, 0, 0}, 3}, // idle msg
                { { 0, 0, 0, 0, 0, 0, 0}, 3}, // loco Msg
        };
*/

void Exercise7(struct Message message[MAXMSG])
{
    message[1].data[0] = 1;
    message[1].data[1] = 2;
    message[1].data[2] = 3;

    int locoAddr1 = 0;
    int data1 = 1;
    int xdata1 = 2;

    message[1].data[0] = locoAddr1;
    message[1].data[1] = data1;
    message[1].data[2] = xdata1;

    printf("locoAddr1 is: %d, data1 is: %d, xdata1 is: %d\n", locoAddr1, data1, xdata1);
}
