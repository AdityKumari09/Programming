#include <stdio.h>

int sum(int ll, int ul);

int main(void)
{
    int ll, ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    printf("The sum is %d ", sum(ll, ul));
}

int sum(int ll, int ul)
{
    int sum = 0;

    while (ll <= ul)
    {
        sum = sum + ll;
        ++ll;
    }

    return sum;
}

/*
Enter lower and upper limits: 5 10
The sum is 45
*/
