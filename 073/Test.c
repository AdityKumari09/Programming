#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, factorial(n));
}

int factorial(int n)
{
    int fact = 1;

    while (n >= 1)
    {
        fact = fact  * n;
        --n;
    }

    return fact ;
}
/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 120

*/