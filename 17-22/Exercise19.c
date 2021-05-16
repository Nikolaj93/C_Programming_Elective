#include <stdio.h>
#include <stdlib.h>
#include "Exercise19.h"

#include "Exercises17-22.h"
#include "../decoration/Decoration.h"
void swap(int *a,int *b);

/**
 * What will the printout of this program be ?
**/
int Exercise19()
{
    separatorStart("19");
    int i, j, n;
    int ar[] = {7, 3, 9, 22, 11};

    printf("Array before sort:\n\n");
    for (i=0; i<5; i++)
        printf("ar[%d]=%d\n", i, ar[i]);

    n = 5; /* number of items in sort array */
    for (i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if (ar[j] > ar[j+1])
                swap(&ar[j], &ar[j+1]);
        }
    }

    printf("Array after sort:\n\n");
    for(i=0; i<5; i++)
        printf("ar[%d]=%d\n", i, ar[i]);

    separatorEnd("19");

    system("pause");
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}