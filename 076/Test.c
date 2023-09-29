#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int);
bool is_armstrong(int);

int main(void)
{
    int i, m;
    printf("Enter lower and upper limits: ");
    scanf("%d", &i);
    scanf("%d", &m);
    printf("\n");

    while (i <= m)
    {
        bool i_is_prime = is_prime(i);
        bool i_is_armstrong = is_armstrong(i);

        if (i_is_armstrong && i_is_prime)
        {
            printf("%d is prime as well as armstrong\n", i);
        }

        else if (i_is_prime)
        {
            printf("%d is only prime\n", i);
        }

        else if (i_is_armstrong)
        {
            printf("%d is only armstrong\n", i);
        }

        else
        {
            printf("%d is neither prime nor armstrong\n", i);
        }

        ++i;
    }

    return 0;
}

bool is_prime(int i)
{
    if (i == 1)
    {
        return false;
    }

    else
    {
        int k = 2;
        bool i_is_prime = true;
    
        while (k * k <= i)
        {
            if (i % k == 0)
            {
                i_is_prime = false;
                break;
            }
    
            ++k;
        }

        return i_is_prime;
    }    
}

bool is_armstrong(int i)
{
    int temp1 = i;
    int temp2 = i;
    int no_of_digits = 0;

    while (i > 0)
    {
        ++no_of_digits;
        i = i / 10;
    }

    int sum = 0;

    while (temp1 > 0)
    {
        int last_digit = temp1 % 10;
        sum = sum + (int) pow((double) last_digit, (double) no_of_digits);
        temp1 = temp1 / 10;
    }

    return sum == temp2;
}

/*

Enter lower and upper limits: 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/