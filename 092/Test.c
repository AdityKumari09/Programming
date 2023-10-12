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

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int n;
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));
//     printf("Enter n integer :- ");

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", arr + i);
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     free(arr);

//     return 0;
// }


/*
using malloc

Enter 5 integers 10 20 30 40 50
10 20 30 40 50
*/