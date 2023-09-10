#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;

    while (n > 9)
    {
        int last_digit = n % 10;
        n = n / 10;
        sum = sum + last_digit;
        printf("%d + ", last_digit);
    }

    printf("%d = %d\n", n, n + sum);

    return 0;
}

/*

Enter a positive integer: 1024
4 + 2 + 0 + 1 = 7

 */