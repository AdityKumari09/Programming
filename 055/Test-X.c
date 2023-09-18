#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("\n");

    int i = 1;

    while (i <= r)
    {
        int j = 1;

        while (j <= (i - 1))
        {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= ((r - i) * 2) + 1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }

    return 0;

}
 /*

// Enter the number of rows: 5

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// */

/*
r = 7

* * * * * * * * * * * * *
  * * * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
           */