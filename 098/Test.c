/*

reversing an array

*/
#include <stdio.h>
#include <stdlib.h>

void reverse_array(int*, int);
void swap(int* , int*);

int main(void)
{
    int n;
    printf("Enter the number of integers :- ");
    scanf("%d", &n);

    int* arr = (int*) malloc (n * sizeof (int));

    printf("Enter %d integers :- ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    printf("Before reversing: ");

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    reverse_array(arr, n);

    printf("After reversing: ");

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}

void reverse_array(int* arr, int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        swap(&(arr[i]), &(arr[(n - 1) - i]));
    }
}

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

// #include <stdio.h>
// #include <stdlib.h>

// void reverse_array(int*, int);
// void swap(int* , int*);

// int main(void)
// {
//     int n;
//     printf("Enter the number of integers :- ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc (n * sizeof (int));

//     printf("Enter %d integers :- ", n);

//     for (int i = 0; i < n; ++i)
//     {
//         scanf("%d", (arr + i));
//     }

//     printf("Before reversing: ");

//     for (int i = 0; i < n; ++i)
//     {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     reverse_array(arr, n);

//     printf("After reversing: ");

//     for (int i = 0; i < n; ++i)
//     {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     free(arr);

//     return 0;
// }

// void reverse_array(int* arr, int n)
// {
//     for (int i = 0; i < n / 2; ++i)
//     {
//         swap((arr + i), (arr + (n - 1 - i)));
//     }
// }

// void swap(int* ptr_a, int* ptr_b)
// {
//     int temp = *ptr_a;
//     *ptr_a = *ptr_b;
//     *ptr_b = temp;
// }
