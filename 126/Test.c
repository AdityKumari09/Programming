//HCF
#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d", &a);
    scanf("%d", &b);

    int temp = gcd(a, b);

    printf("GCD = %d\n", temp);

    printf("LCM = %d\n", (a * b) / temp);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    else
    {
        return gcd(b , a % b);
    }
}