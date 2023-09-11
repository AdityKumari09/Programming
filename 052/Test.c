#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter lower and upper limits: ");
    scanf("%d", &n);
    scanf("%d", &m);

    int first_prime = -1;

    while (n <= m)
    {
        int i = 1;
        int no_of_factors = 0;

        while (i <= n)
        {
            if (n % i == 0)
            {
                ++no_of_factors;
            }

            ++i;
        }

        if (no_of_factors == 2)
        {
            first_prime = n;
            break;
        }

        else
        {
            ++n;
        }

    }

    if (first_prime == -1)
    {
        printf("There are no prime numbers in the given range\n");
    }

    else
    {
        printf("%d ", first_prime);
        n = first_prime + 1;
        int sum = first_prime;
    
        while (n <= m)
        {
            int i = 1;
            int no_of_factors = 0;
    
            while (i <= n)
            {
                if (n % i == 0)
                {
                    ++no_of_factors;
                }
                
                ++i;
            }
    
            if (no_of_factors == 2)
            {
                printf("+ %d ", n);
                sum = sum + n;
            }
    
            ++n;
        }
    
        printf("= %d\n", sum);
    }    

    return 0;     
}
/*
 1) 
 Enter lower and upper limits: 5 20 
 5 + 7 + 11 + 13 + 17 + 19 = 72 
  
 2) 
 Enter lower and upper limits: 7 10 
 7 = 7 
  
 3) 
 Enter lower and upper limits: 24 28 
 There are no prime numbers is the given range

*/

/*
    int first_prime = -1
    while n is less than or equal to m:
        if n is prime:
            first_prime = n
            break
        else:
            ++n 
    if first_prime == -1:
        print no prime
    else:
        print first_prime                

*/