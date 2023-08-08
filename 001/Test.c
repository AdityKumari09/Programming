#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter five positive integers : ");
    scanf("%d", &n);

    int largest = 0;

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    scanf("%d", &n);

    if (n > largest)
    {
        largest = n;
    }

    printf("%d is largest\n", largest);

    return 0;
}
/* Enter five positive integer 3 12 45 65 43
65 is largest */