#include <stdio.h>

int main(void)
{
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    int new_ll, new_ul;

    if (ll % 2 != 0)
    {
        new_ll = ll + 1;
    }

    else 
    {
        new_ll = ll;
    }

    if (ul % 2 != 0)
    {
        new_ul = ul - 1;
    }

    else 
    {
        new_ul = ul;
    }

    if (new_ll == new_ul)
    {
       printf("%d\n", ul);
    }

    else 
    {
        while (new_ll < new_ul - 2)
        {
            printf("%d, ", new_ll);
            new_ll = new_ll + 2;
        }
        printf("%d and %d\n", new_ul - 2, new_ul);
    }

    return 0;
}

/*

Enter lower and upper limits: 7 15
8, 10, 12 and 14

*/