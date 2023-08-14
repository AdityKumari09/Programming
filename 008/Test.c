#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter 5 positive integers: ");
    scanf("%d", &n);

    int l = 0;
    
    if (n > l)
    {
        l = n;
    }
    
    scanf("%d", &n);

    if (n > l)
    {
        l = n;
    }
    
    scanf("%d", &n);

    if (n > l)
    {
        l = n;
    }
    scanf("%d", &n);

    if (n > l)
    {
        l = n;
    }
    
    scanf("%d", &n);

    if (n > l)
    {
        l = n; 
    }

    printf("%d is largest\n", l);

    return 0;
}
/*

Enter 5 positive integers: 3 2 1 2 2
3 is the largest

*/
