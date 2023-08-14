#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    if ((n % 4 == 0) && (n % 100 != 0))
    {
        printf("It is a leap year\n");
    }

    else if ((n % 4 == 0) && (n % 100 == 0) && (n % 400 == 0))
    {
        printf("It is a leap year\n");
    }

    else 
    {
        printf("It is not a leap year\n");
    }

    return 0;
}
/*

Enter a year: 1000
It is not a leap year

*/