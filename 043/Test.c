#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0,
        c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;

    while (n > 0)
    {
        int ld = n % 10;

        if (ld == 0)
        {
            ++c0;
        }

        else if (ld == 1)
        {
            ++c1;
        }

        else if (ld == 2)
        {
            ++c2;
        }

        else if (ld == 3)
        {
            ++c3;
        }

        else if (ld == 4)
        {
            ++c4;
        }

        else if (ld == 5)
        {
            ++c5;
        }

        else if (ld == 6)
        {
            ++c6;
        }

        else if (ld == 7)
        {
            ++c7;
        }

        else if (ld == 8)
        {
            ++c8;
        }

        else
        {
            ++c9;
        }

        n = n / 10;
    }
    
    printf("| 0 | %d |\n", c0);
    printf("| 1 | %d |\n", c1);
    printf("| 2 | %d |\n", c2);
    printf("| 3 | %d |\n", c3);
    printf("| 4 | %d |\n", c4);
    printf("| 5 | %d |\n", c5);
    printf("| 6 | %d |\n", c6);
    printf("| 7 | %d |\n", c7);
    printf("| 8 | %d |\n", c8);
    printf("| 9 | %d |\n", c9);
   
    return 0;    
}
/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |

*/

