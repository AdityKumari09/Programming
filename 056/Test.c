
#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (>= 3): ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of columns (>= 3): ");
    scanf("%d", &c);

    printf("\n");

    int i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

    /////////////////////////////////////////////////////////////////////

    i = 2;

    while (i <= r - 1)
    {
        printf("* ");

        int j = 1;

        while (j <= c - 2)
        {
            printf("  ");
            ++j;
        }

        printf("* \n");

        ++i;
    }

    ////////////////////////////////////////////////////////////////////
    
    i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

    return 0;
}
/*

Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 5

* * * * *
*       *
*       *
* * * * *

*/

/*
r = 5 c = 6
 * * * * * *
 *         *
 *         *
 *         *
 * * * * * *
*/
