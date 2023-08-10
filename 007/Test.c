#include <stdio.h>

int main(void)
{
    printf("* * * * * * * * * * * * * *\n");
    printf("* Choice   Operation      *\n");
    printf("*                         *\n");
    printf("* 1        Addition       *\n");
    printf("* 2        Subtraction    *\n");
    printf("* 3        Multiplication *\n");
    printf("* * * * * * * * * * * * * *\n\n");

    int n, m;
    printf("Enter 2 integers: ");
    scanf("%d%d", &n, &m);

    int l;
    printf("Enter your choice: ");
    scanf("%d", &l);
    printf("\n");

    if (l == 1)
    {
        printf("%d + %d = %d\n", n, m, n + m);
    }

    else if (l == 2)
    {
        printf("%d - %d = %d\n", n, m, n - m);
    }

    else
    {
        printf("%d * %d = %d\n", n, m, n * m);
    }

    return 0;
}
/*

* * * * * * * * * * * * * *
* Choice   Operation      *
*                         *
* 1        Addition       *
* 2        Subtraction    *
* 3        Multiplication *
* * * * * * * * * * * * * *

Enter 2 integers: 10 5
Enter your choice: 2

10 - 5 = 5

*/