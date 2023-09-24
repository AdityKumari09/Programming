#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd) (>= 5): ");
    scanf("%d", &r);
    printf("\n");

    int temp = (r + 1) / 2;

    int i = 1; 

    while (i <= r)
    {
        printf("* ");
        ++i;
    }

    printf("\n");
////////////////////////////////////////////////////////////////////////////

    i = 2;

    while (i <= temp - 1)
    {
        int j = 1;

        printf("* ");

        while (j <= i - 2)
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= r - (i * 2))
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= i - 2)
        {
            printf("  ");
            ++j;
        }

        printf("*\n");
        ++i;
    }

///////////////////////////////////////////////////////////////////////

    printf("* ");

    i = 1;

    while (i <= temp - 2)
    {
        printf("  ");
        ++i;
    }

    printf("* ");

    i = 1;

    while (i <= temp - 2)
    {
        printf("  ");
        ++i;
    }

    printf("*\n");
////////////////////////////////////////////////////////////////////////

    i = temp - 1;

    while (i >= 2)
    {
        int j = 1;

        printf("* ");

        while (j <= i - 2)
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= r - (i * 2))
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= i - 2)
        {
            printf("  ");
            ++j;
        }

        printf("*\n");
        --i;
    }

///////////////////////////////////////////////////////////////////////
    i = 1;

    while (i <= r)
    {
        printf("* ");
        ++i;
    }

    return 0;
}
/*
Enter the number of rows (odd) (>= 5): 9

* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *

*/
