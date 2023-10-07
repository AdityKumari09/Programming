#include <stdio.h>

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

    for (int i = 0; i < 20 / 2; ++i)
    {
        // swap arr[i] and arr[19 - i]

        int temp = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = temp;
    }

    // int temp = arr[0];
    // arr[0] = arr[4];
    // arr[4] = temp;

    // temp = arr[1];
    // arr[1] = arr[3];
    // arr[3] = temp;

    printf("After reversing: ");
    
    for (int i = 0; i < 20; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}


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
