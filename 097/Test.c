#include <stdio.h>
#include <stdlib.h>

int find_index(int*, int, int);

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

    int target;
    printf("Enter elemnt to be searched: ");
    scanf("%d", &target);

    int index_of_target = find_index(arr, n, target);

    if (index_of_target != -1)
    {
        printf("%d is found at index %d\n", target, index_of_target);
    }

    else
    {
        printf("%d is not found\n", target);
    }

    free(arr);

    return 0;
}

int find_index(int* arr, int n, int target)
{
    int index_of_target = -1;

    for (int i = 0; i < n; ++i)
    {
        if (target == arr[i])
        {
            index_of_target = i;
            break;
        }
    }
    
    return index_of_target;
}

// #include <stdio.h>
// #include <stdlib.h>

// int find_index(int*, int, int);

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

//     int target;
//     printf("Enter elemnt to be searched: ");
//     scanf("%d", &target);

//     int index_of_target = find_index(arr, target, n);

//     if (index_of_target != -1)
//     {
//         printf("%d is found at index %d\n", target, index_of_target);
//     }

//     else
//     {
//         printf("%d is not found\n", target);
//     }

//     free(arr);

//     return 0;
// }

// int find_index(int* arr, int target, int n)
// {
//     int index_of_target = -1;

//     for (int i = 0; i < n; ++i)
//     {
//         if (target == *(arr + i))
//         {
//             index_of_target = i;
//             break;
//         }
//     }
    
//     return index_of_target;
// }
/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found at index 3

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/