#include <stdio.h>

int main(void)
{
    int x[10];
    printf("Enter 10 integers ");

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &x[i]);
    }

    int sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        sum = sum + x[i];
    }

    printf("Their sum is %d\n", sum);

    return 0;
}
/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/