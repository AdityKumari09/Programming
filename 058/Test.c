#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (>= 3): ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of columns (>= 3): ");
    scanf("%d", &c);

    int i = 1;

    while (i <= c - r)
    {
        printf("  ");
        ++i;
    }

    i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");

    ////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////

    i = 1;

    while (i <= c)
    {
        printf("* ");
        ++i;
    }

    printf("\n");   
}
/*
Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 7

      * * * * * * *
    *           *
  *           *
* * * * * * *
*/

/*
r = 3 c = 5
 r - 1
*/