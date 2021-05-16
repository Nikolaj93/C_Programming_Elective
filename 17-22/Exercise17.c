#include <stdio.h>
#include "Exercise17.h"

#include "Exercises17-22.h"
#include "../decoration/Decoration.h"

/**
 * Make a program with two variables of the type int x=10 and y=20.
 * We would like to let the program printout the value in the variable, as well as the address.
**/
int Exercise17()
{
    separatorStart("17");
    int x = 10;
    int y = 20;
    int *ptr_x = NULL;
    int *ptr_y = NULL;
    // Now we let the pointer point at the addresses of the variables.
    ptr_x = &x;
    ptr_y = &y;
    printf("Now printing the values.\n");
    printf("x = %d y=%d\n", *ptr_x, *ptr_y);
    printf("Now printing the addresses.\n");
    printf("x = %p y = %p\n", &x, &y);
/*
    printf("int x = %d, int x pointer = %p, int x reference = %p\n", x, ptr_x, &x);
    printf("int y = %d, int y pointer = %p, int y reference = %p\n", y, ptr_y, &y);
*/
    separatorEnd("17");
    return 0;
}
