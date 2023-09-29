#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter 2 integers: ");
    scanf("%d", &n);
    scanf("%d", &m);

    int* ptr_n; //pointer-to-integer data type
    ptr_n = &n;
    
    int* ptr_m = &m;

    printf("%d + %d = %d\n", n, m, *ptr_n + *ptr_m);

    return 0;
}
/*
Enter 2 integers: 5 7
5 + 7 = 12
*/