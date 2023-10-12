#include <stdio.h>

void reverse_array(int*);
void swap(int* , int*);

int main(void)
{
    int arr[20];
    printf("Enter 20 integers: ");

    for (int i = 0; i < 20; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before reversing: ");

    for (int i = 0; i < 20; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    reverse_array(arr);

    printf("After reversing: ");

    for (int i = 0; i < 20; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void reverse_array(int* arr)
{
    for (int i = 0; i < 20 / 2; ++i)
    {
        swap(&(arr[i]), &(arr[19 - i]));
    }
}

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

// #include <stdio.h>

// int main(void)
// {
//     int arr[20];
//     printf("Enter 20 integers: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Before reversing: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     for (int i = 0; i < 20 / 2; ++i)
//     {
//         // swap arr[i] and arr[19 - i]

        // int temp = arr[i];
        // arr[i] = arr[19 - i];
        // arr[19 - i] = temp;
//     }

//     printf("After reversing: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;
// }

//POINTER NOTATION
// #include<stdio.h>

// int main(void)
// {
//     int arr[20];
//     printf("Enter 20 integers: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         scanf("%d", (arr + i));
//     }

//     printf("Before reversing: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     for (int i = 0; i < 20 / 2; ++i)
//     {
//         // swap arr[i] and arr[19 - i]

//         int temp = *(arr + i);
//         *(arr + i) = *(arr + 19 - i);
//         *(arr + 19 - i) = temp;
//     }

//     printf("After reversing: ");
    
//     for (int i = 0; i < 20; ++i)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;
// }

/*

reversing an array

*/
