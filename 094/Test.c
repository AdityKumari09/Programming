#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));

    printf("Enter %d integers :- ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum = sum + arr[i];
    }
    
    printf("Their sum is %d\n", sum);

    free(arr);

    return 0;
}

// #include <stdio.h>
// #include<stdlib.h>

// int main(void)
// {
//     int n;
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));

//     printf("Enter %d integers :- ", n);

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", (arr + i));
//     }

//     int sum = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         sum = sum + *(arr + i);
//     }
    
//     printf("Their sum is %d\n", sum);

//     free(arr);

//     return 0;
// }
/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/