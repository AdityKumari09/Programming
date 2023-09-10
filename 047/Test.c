#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter two positive integers: ");
    scanf("%d", &n);
    scanf("%d", &m);

    int i = 1;
    int hcf;

    printf("HCF = ");

    if (n < m)
    {
        while (i <= n)
        {
            if ((n % i == 0) && (m % i == 0))
            {
                hcf = i;
            }

            ++i;
        }

        printf("%d\n", hcf);

    }

    else if (m < n)
    {
        while (i <= m)
        {
            if ((n % i == 0) && (m % i == 0))
            {
                hcf = i;
            }

            ++i;
        } 

        printf("%d\n", hcf);

    }

    else 
    {
        printf("%d\n", n);
    }

    return 0;
}
   
/*

1)
Enter 2 positive integers: 1 5
HCF = 1

2)
Enter 2 positive integers: 7 21
HCF = 7

*/
/*

initialize i with 1 
while i is less than or equal to smaller no. 
    if i is a factor of both 
        assign i to hcf
print hcf            

*/