#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter 2 integers: ");
    scanf("%d", &n);
    scanf("%d", &m);

    printf("%d + %d = %d\n", n, m, n + m);
    printf("%d - %d = %d\n", n, m, n - m);
    printf("%d * %d = %d\n", n, m, n * m);
    
    return 0;
}

/*

Enter 2 integers: 5 10
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50

*/