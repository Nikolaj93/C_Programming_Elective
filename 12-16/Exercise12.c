#include <stdio.h>
#include <limits.h> // to get minimum and maximum

#include "Exercises12-16.h"
#include "../decoration/Decoration.h"

/**
 * Make a C program that can tell you what is the largest number that can be contained in
 * a char, and an unsigned char.
**/
void Exercise12(void)
{
    separatorStart("12");

    printf("Signed char minimum number: %d and maximum number: %d\n", SCHAR_MAX, SCHAR_MIN);
    printf("Unsigned char minimum number: 0 and maximum number: %d\n", UCHAR_MAX);

    separatorEnd("12");
}
