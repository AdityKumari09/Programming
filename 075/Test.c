#include <stdio.h>
#include <stdbool.h>

int is_prime(int n);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("prime factors -");
    
    int i = 1;

    while (i <= n)
    {
        // The ordering of the conditions is important due to short-circuit
        // evaluation
        if ((n % i == 0) && (is_prime(i)))
        {
            printf("%d ", i);
        }

        ++i;
    }

    printf("\n");
        
    return 0;
}

int is_prime(int i)
{ 
    if (i == 1)
    {
        return false;
    }

    else
    {    
        int j = 2;
        int count = 2;

        while (j * j <= i)
        {
            if (i % j == 0)
            {
                ++count;
                break;
            }

            ++j;
        }

        return count == 2;
    }    
}

/*
  1)
  Enter a positive integer (>= 2): 15
  Prime factors - 3 5

  3)
  Enter a positive integer (>= 2): 48
  Prime factors - 2 3

*/