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
        int j = i;

        while (j <= r * r)
        {
            printf("%02d ", j);
            j = j + r;
        }

        printf("\n");

        ++i;
    }

    return 0;
}
/*
Enter the number of rows: 5

01 06 11 16 21
02 07 12 17 22
03 08 13 18 23
04 09 14 19 24
05 10 15 20 25

*/

