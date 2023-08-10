#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf(" %d is positive\n", n);
    }

    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    
    else 
    {
        printf("%d is negative\n", n);
    }

    return 0;
}
/*

1)
Enter an integer: 5
5 is positive

2)
Enter an integer: 0
0 is zero

3)
Enter an integer: -2
-2 is negative

*/