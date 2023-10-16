#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the number of integers :- ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));

    printf("Enter %d integers :- ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        else if (min > arr[i])
        {
            min = arr[i];
        }

    }

    printf("%d is maximum and %d is minimum\n", max, min);

    free(arr);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int n;
//     printf("Enter the number of integers :- ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));

//     printf("Enter %d integers :- ", n);

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", (arr + i));
//     }

//     int max = *(arr + 0);
//     int min = *(arr + 0);

//     for (int i = 1; i < n; ++i)
//     {
//         if (max < *(arr + i))
//         {
//             max = *(arr + i);
//         }

//         else if (min > *(arr + i))
//         {
//             min = *(arr + i);
//         }

//     }

//     printf("%d is maximum and %d is minimum", max, min);

//     printf("\n");

//     free(arr);

//     return 0;
// }

/*
Enter 5 elements 2 3 4 5 6
6 is maximum and 2 is minimum
*/