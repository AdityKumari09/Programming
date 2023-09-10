#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int m = n;

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        ++count;
    }
    // printf("%d\n", count);

    int div = 1;

    while (count > 1)
    {
        div = div * 10;
        --count;
    }
    // printf("%d\n", div);

    int last_digit = m % 10;
    int first_digit = m / div;
    int temp1 = m % div;
    int temp2 = temp1 / 10;
    int swap = (last_digit * div) + (temp2 * 10 + first_digit);
    printf("After swapping first and last digits, %d\n", swap);

    return 0;
}
/*

1)
Enter a positive integer: 1234
After swapping first and last digits, 4231

2)
Enter a positive integer: 1230
After swapping first and last digits, 231

*/