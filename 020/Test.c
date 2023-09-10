#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an amount: Rs. ");
    scanf("%d", &n);
    
    printf("\nThe notes required are :- \n");

    printf("2000: %d\n", n / 2000);
    n = n % 2000;

    printf("500: %d\n", n / 500);
    n = n % 500;

    printf("200: %d\n", n / 200);
    n = n % 200;

    printf("100: %d\n", n / 100);
    n = n % 100;

    printf("50: %d\n", n / 50);
    n = n % 50;

    printf("20: %d\n", n / 20);
    n = n % 20;

    printf("10: %d\n", n / 10);
    n = n % 10;

    printf("5: %d\n", n / 5);
    n = n % 5;
    
    printf("2: %d\n", n / 2);
    n = n % 2;

    printf("1: %d\n", n / 1);

    return 0;
}
/*

Enter an amount: Rs. 5423

The notes required are :-
2000: 2
500: 2
200: 2
100: 0
50: 0
20: 1
10: 0
5: 0
2: 1
1: 1

*/