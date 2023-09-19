#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);

    r = (r + 1) / 2;

    int i = 1;

    while (i <= r)
    {
        int j = 1;

        while (j <= (i - 1) * 2)
        {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= r - i + 1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }

    i = r - 1;

    while (i >= 1)
    {
        int j = 1;

        while (j <= (i - 1) * 2)
        {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= r - i + 1)
        {
            printf("* ");
            ++j;
        }

        printf("\n");
        --i;
    }

    return 0;
}
/*
Enter the number of rows (odd): 9

* * * * *
    * * * *
        * * *
            * *
                *
            * *
        * * *
    * * * *
* * * * *

*/