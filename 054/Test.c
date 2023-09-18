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

        while (j <= r)
        {
            if (i + j > r)
            {
                printf("* ");
            }

            else 
            {
                printf("  ");
            }

            ++j;
        }

        printf("\n");

        ++i;
    }

    return 0;
}
// #include <stdio.h>

// int main(void)
// {
//     int r;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);

//     int i = 1;

//     /*
//     r = 5
//     i = 2
//     j = 1
    
//             * 
    
//     */

//     while (i <= r)
//     {
//         // print (r - i) units of spaces (1 unit == 2 spaces)

//         int j = 1;

//         while (j <= (r - i))
//         {
//             printf("  ");
//             ++j;
//         }

//         // print i units of stars (1 unit == 1 star + 1 space)

//         j = 1;

//         while (j <= i)
//         {
//             printf("* ");
//             ++j;
//         }

//         printf("\n");
//         ++i;
//     }

//     return 0;
// }    
// }

/*
  Enter the number of rows: 5

        *
      * *
    * * *
  * * * *
* * * * *

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

*/