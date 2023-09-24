#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (0dd) (>= 5): ");
    scanf("%d", &r);

    printf("\n");

    r = (r + 1) / 2;

    int i = 1;

    while (i <= r - 1)
    {
        printf("  ");
        ++i;
    }

    printf("*\n");

    ////////////////////////////////////////////////////////////////////////////

    i = 2;

    while (i <= r)
    {
        int j = 1;

        while (j <= r - i)
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
    //////////////////////////////////////////////////////////////////////////

    i = r - 1;

    while (i >= 2)
    {
         int j = 1;

          while (j <= r - i)
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
  ////////////////////////////////////////////////////////////////////////////

    i = 1;

    while (i <= r - 1)
    {
          printf("  ");
          ++i;
    }

    printf("*\n");

    return 0;
}
/*
Enter the number of rows (odd) (>= 5): 9

        *
      * *
    *   *
  *     *
*       *
  *     *
    *   *
      * *
        *
*/