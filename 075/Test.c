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
        if ((n % i == 0) && (is_prime(i)))
        {
            printf("%d ", i);
        }

        ++i;
    }
        
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
        int j = 1;
        int count = 0;

        while (j <= n)
        {
            if (n % j == 0)
            {
                ++count;
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