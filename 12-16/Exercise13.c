#include <stdio.h>

#include "Exercises12-16.h"
#include "../decoration/Decoration.h"

/**
 * Make a C program to show all prime numbers from 1 to 100.
**/
void Exercise13(void)
{
    separatorStart("13");

    int n, i = 3, count, c;

    printf("Enter the number of prime numbers to print\n");
    scanf("%d", &n);

    if (n >= 1) {
        printf("First %d prime numbers are:\n",n);
        printf("2\n");
    }

    for (count = 2; count <= n;)
    {
        for (c = 2; c <= i - 1; c++)
        {
            if (i%c == 0)
                break;
        }
        if (c == i)
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    separatorEnd("13");

}
