#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    
    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int i = 1;

    printf("\n");

    while (i <= r)
    {
        int j = 1;

        while (j <= c)
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

Enter the number of rows: 3
Enter the number of columns: 5

* * * * *
* * * * *
* * * * *

*/