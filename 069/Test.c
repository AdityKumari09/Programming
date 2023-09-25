#include <stdio.h>

int sum(int, int);
int difference(int, int);
int product(int, int);

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
    scanf("%d", &n);

    printf("Enter 2 inetgers: ");
    scanf("%d", &m);

    int l;
    printf("Enter your choice: ");
    scanf("%d", &l);
    printf("\n");

    if (l == 1)
    {
        printf("%d + %d = %d\n", n, m, sum(n, m));
    }

    else if(l == 2)
    {
        printf("%d - %d = %d\n", n, m, difference(n, m));
    }

    else
    {
        printf("%d * %d = %d\n", n, m, product(n, m));
    }
}

int sum(int n, int m)
{
    return n + m;
}

int difference(int n, int m)
{
    return n - m;
}

int product(int n, int m)
{
    return n * m;
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