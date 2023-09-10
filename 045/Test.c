#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int p = 1;
    printf("%d! = ", n);

    if (n > 1)
    {
        while (n > 1)
        {
            printf("%d x ", n);
            p = p * n;
            --n;
        }

        printf("%d = %d\n", n, p);
    }

    else
    {
        printf("%d\n", n);
    }
}
/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 5 x 4 x 3 x 2 x 1 = 120

*/