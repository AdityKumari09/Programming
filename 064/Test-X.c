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
        int count = 0;

        while (count < i)
        {
            printf("%02d ", j);
            j = j + r - (count + 1);
            ++count;
        }

        printf("\n");
        ++i;
    }

    return 0;
}
/*
Enter the number of rows: 5

01
02 06
03 07 10
04 08 11 13
05 09 12 14 15
*/