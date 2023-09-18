#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (>= 4): ");
    scanf("%d", &r);

    printf("\n");

    int i = 1;

    while (i <= r)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

    ///////////////////////////////////////////////////////////////////

    i = 2;

    while (i <= r - 1)
    {
        int j = 1;

        while (j <= i - 1)
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= r - (i + 1))
        {
            printf("  ");
            ++j;
        }

        printf("*\n");

        ++i;
    }
    
    //////////////////////////////////////////////////////////////////

    i = 1;

    while (i <= r - 1)
    {
        printf("  ");
        ++i;
    }
    
    printf("*\n");
}
/*
Enter the number of rows (>= 4): 5

* * * * *
  *     *
    *   *
      * *
        *
*/

/*
r = 8
* * * * * * * *
  *           *
    *         *
      *       *
        *     *
          *   *
            * *
              *
*/