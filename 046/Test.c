#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors = ");

    if (n == 1)
    {
        printf("%d\n", n);
    }

    else
    {
        printf("1");

        int m = 2;
        
        while (m < n)
        {
            if (n % m == 0)
            {
                printf(", %d", m);
            }

            ++m;
        }
        
        printf("and %d\n", n);
    }

    return 0;
}
/*

1)
Enter a positive integer: 1
Factors = 1

2)
Enter a positive integer: 10
Factors = 1, 2, 5 and 10

3)
Enter a positive integer: 13
Factors = 1 and 13

*/