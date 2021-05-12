#include <stdio.h>

#include "Exercises12-16.h"
#include "../decoration/Decoration.h"

void Exercise14(void)
{
    separatorStart("14");

    int a = 12;
    int b = 16;
    int c = 17;
    if (((c+6<b) && (b<a+11) ) || (a*2 == b+8))
    {
        printf("I found it to be true! \n");
    } else {
        printf("I found it to be false! \n");
    }
    separatorEnd("14");
}