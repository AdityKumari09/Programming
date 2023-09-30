#include <stdio.h>

int main(void)
{
    int x[5];
    printf("Enter 5 elements ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &x[i]);
    }

    int max = x[0];
    int min = x[0];

    for (int i = 1; i < 5; ++i)
    {
        if (max < x[i])
        {
            max = x[i];
        }

        // Is it necessary to use if, or can we use else if over here?
        else if (min > x[i])
        {
            min = x[i];
        }
    }

    // int min = x[0];

    // for (int i = 1; i < 5; ++i)
    // {
    //     if (min > x[i])
    //     {
    //         min = x[i];
    //     }
    // }

    printf("%d is maximum and %d is minimum\n", max, min);

    return 0;
}

/*
Enter 5 elements 2 3 4 5 6
6 is maximum and 2 is minimum
*/