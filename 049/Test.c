#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is an armstrong number\n");
    }

    else
    {
        int no_of_digits = 0;
        int temp1 = n;
        int temp2 = n;

        /*
        n = 0
        nd = 3
        */

        while (n > 0)
        {
            ++no_of_digits;
            n = n / 10;
        }

        int sum = 0;
    
        while (temp1 > 0)
        {
            int last_digit = temp1 % 10;
            sum = sum + (int) pow((double) last_digit, (double) no_of_digits);
            temp1 = temp1 / 10;
        }

        if (sum == temp2)
        {
            printf("%d is an armstrong number\n", temp2);
        }

        else
        {
            printf("%d is not an armstrong number\n", temp2);
        }

    }
    
    return 0;
}
/*

1)
Enter a positive integer: 1
1 is an armstrong number

2)
Enter a positive integer: 10
10 is not an armstrong number

3)
Enter a positive integer: 153
153 is an armstrong number

*/