#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    ll = ll + (ll % 2);

    if (ll == ul)
    {
        printf("%d\n", ul);
    }

    else 
    {
        while (ll < ul - 2)
        {
            printf("%d, ", ll);
            ll = ll + 2 ;
        }
    
        printf("%d and %d\n", ul - 2, ul);
    }

    return 0;
}

/*

Enter lower and upper limits: 7 15
8, 10, 12 and 14

*/