#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0\n");
    }

    else
    {
        int a = 0;
        int b = 1;
        int sum = 0;

        printf("%d", a);

        while (n > 2)
        {
            printf(", %d", b);

            sum = a + b;
            a = b;
            b = sum;
            --n;
        }

        printf(" and %d\n", b);
    }

    return 0;
}
/*

1)
Enter the number of terms: 1
0

2)
Enter the number of terms: 2
0 and 1

3)
Enter the number of terms: 3
0, 1 and 1

4)
Enter the number of terms: 6
0, 1, 1, 2, 3 and 5

*/