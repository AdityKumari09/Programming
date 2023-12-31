#include <stdio.h>

int number_of_digits(int n);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d has %d digits\n", n, number_of_digits(n));

    return 0;
}

int number_of_digits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        ++count;
    }

    return count;
}

/*

Enter a positive integer: 1024
1024 has 4 digits

 */