//Fibonacci

#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    else
    {
        return (fibonacci(n - 2) + fibonacci(n - 1));
        // prblm of overlapping sub prblm
    }
}