#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    int m = n;

    int rev = 0;

    while (n > 0)
    {
        // int last_digit = n % 10;
        // rev = (rev * 10) + last_digit;
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }   

    // printf("%d\n", rev);

    if(m == rev)
    {
        printf("%d is a palindrome\n", m);
    }

    else
    {
        printf("%d is not a palindrome\n", m);
    }

    return 0;
}
/*

1)
Enter a non-negative integer: 1234
1234 is not a palindrome

2)
Enter a non-negative integer: 1000
1000 is not a palindrome

3)
Enter a non-negative integer: 12321
12321 is a palindrome

*/