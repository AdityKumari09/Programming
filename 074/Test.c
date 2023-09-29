#include <stdio.h>
#include <stdbool.h>

int is_prime(int n);

int main(void)
{
    int n;
    printf("Enter a positive integr: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }

    else if (is_prime(n))
    {
        printf("%d is prime\n", n);
    }

    else
    {
        printf("%d is composite\n", n);
    }

    return 0;  
}

int is_prime(int n)
{
    int i = 1;
    int count = 0;

    while (i <= n)
    {
        if (n % i == 0)
        {
           ++count;
        }

        ++i;
    }

    return count == 2;
}
/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/