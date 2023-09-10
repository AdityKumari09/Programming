#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter 2 positive integers: ");
    scanf("%d", &n);
    scanf("%d", &m);

    int multiplier = 1;

    if (m > n)
    {
        int i = m;
        
        while (i % n != 0)
        {
            i = m * multiplier;
            multiplier++;
        }

        printf("LCM = %d\n", i);
    }

    else if (n > m)
    {
        int i = n;
    
        while (i % m != 0)
        {
            i = n * multiplier;
            multiplier++;
        }

        printf("LCM = %d\n", i);
    }
    
    else 
    {
        printf("LCM = %d\n", n);
    }

    return 0;
}
/*

1)
Enter 2 positive integers: 1 5
LCM = 5

2)
Enter 2 positive integers: 7 8
LCM = 56

*/

// #include <stdio.h>

// int main(void)
// {
//     int n, m;
//     printf("Enter a positive inetegr: ");
//     scanf("%d", &n);
//     printf("Enter starting point: ");
//     scanf("%d", &m);

//     while (m % n != 0)
//     {
//         ++m;
//     }
//     printf("The next multiple is %d\n", m);

//     return 0;

// }
