#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }

    else
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

        //printf("%d\n", no_of_factors);

        if (no_of_factors == 2)
        {
            printf("%d is prime\n", n);
        }

        else
        {
            printf("%d is composite\n", n);
        }
    }    

    return 0;
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