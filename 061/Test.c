#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd) (>= 3): ");
    scanf("%d", &r);
    printf("\n");

    int temp = (r + 1) / 2;

    int i = 1;

    while (i <= temp - 1)
    {
        printf("  ");
        ++i;
    }

    printf("*\n");

    ///////////////////////////////////////////////////////////////////////////

    i = 2;

    while (i <= temp)
    {
        int j = 1;

        while (j <= temp - i)
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= (i - 2) * 2 + 1)
        {
            printf("  ");
            ++j;
        }

        printf("*\n");
        ++i;
    }
    //////////////////////////////////////////////////////////////////////////

    i = temp - 1;

    while (i >= 2)
    {
        
        int j = 1;

        while (j <= temp - i)
        {
            printf("  ");
            ++j;
        }

        printf("* ");

        j = 1;

        while (j <= (i - 2) * 2 + 1)
        {
            printf("  ");
            ++j;
        }

        printf("*\n");
        --i;
    }

    ///////////////////////////////////////////////////////////////////////////

    i = 1;

    while (i <= temp - 1)
    {
        printf("  ");
        ++i;
    }

    printf("*\n");

    return 0;
}
/*
Enter the number of rows (odd) (>= 3): 7

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
*/