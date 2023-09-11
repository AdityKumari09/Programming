#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, m;
    printf("Enter lower and upper limits: ");
    scanf("%d", &n);
    scanf("%d", &m);

    /*
    n = 6
    m = 20
    i = 1
    no = 0

    */

    printf("Prime numbers - ");
    
    while (n <= m)
    {
        int i = 1;
        //bool n_is_prime = true;
        int no_of_factors_of_n = 0;

        while (i <= n)
        {
            if (n % i == 0)
            {
                ++no_of_factors_of_n;
            }

            ++i;
        }

        if (no_of_factors_of_n == 2)
        {
            printf("%d ", n);
        }

        ++n;
    }

    return 0;
}
/*

Enter lower and upper limits: 5 20
Prime numbers - 5 7 11 13 17 19

*/