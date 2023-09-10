#include <stdio.h>

int main (void)
{
    double  base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the integral exponent: ");
    scanf("%d", &exponent);
    int m = exponent;

    double p = 1.0;

    if ((base == 0.0) && (exponent > 0))
    {
        printf("0 ^ %d = 0\n", m, p);
    }

    else if (exponent > 0)
    {
        printf("\n%g ^ %d = ", base, exponent);

        while (exponent > 0)
        {
            p = p * base;
            --exponent;
        }

        printf("%g\n", p);
    }

    // else if ((base < 0) && (exponent > 0))
    // {
    //     while (exponent > 0)
    //     {
    //         p = p * base;
    //         --exponent;
    //     }
    //     printf("\n%g ^ %d = %g\n", base, m, p);
    // }

    else if ((base == 0.0) && (exponent == 0))
    {
        printf("\n%g ^ %d is undefined\n", base, m);
    }


    else if (exponent == 0)
    {
        printf("\n%g ^ %d = 1\n", base, m);
    }

    // else if ((base < 0) && (exponent == 0))
    // {
    //     printf("\n%g ^ 0 = 1\n", base);
    // }
    else if ((base == 0.0) && (exponent < 0))
    {
        printf("\nDividing by 0 is undefined\n");
    }
    
     else //(((base > 0) || (base < 0)) && (exponent < 0))
    {
        printf("\n%g ^ %d = ", base, exponent);

        while (exponent < 0)
        {
            p = p * base;
            ++exponent;
        }

        printf("%g\n", 1 / p);
    }

    // else if ((base < 0) && (exponent < 0))
    // {
    //     while (exponent < 0)
    //     {
    //         p = p * base;
    //         ++exponent;
    //     }
    //     printf("\n%g ^ %d = %g\n", base, m, 1 / p);
    // }

    return 0;
}
/*

Note: Try using %g with printf() to print double values.

1)
Enter the base: 1.2
Enter the integral exponent: 3

1.2 ^ 3 = 1.728

2)
Enter the base: -2.5
Enter the integral exponent: -2

-2.5 ^ -2 = 0.16

3)
Enter the base: 7
Enter the integral exponent: 0

7 ^ 0 = 1

4)
Enter the base: 0
Enter the integral exponent: 4

0 ^ 4 = 0

5)
Enter the base: 0
Enter the integral exponent: 0

0 ^ 0 is undefined

6)
Enter the base: 0
Enter the integral exponent: -3

Dividing by 0 is undefined

*/