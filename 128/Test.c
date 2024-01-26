//reverse an array

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int*, int, int);
void swap(int* , int*);

int main(void)
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));
    
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

    reverse_array(arr, 0, n - 1);

    printf("After reversing : ");

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

void reverse_array(int* arr, int i, int j)
{
    if (i < j)
    {
        swap(&(arr[i]), &(arr[j]));

        reverse_array(arr, i + 1, j - 1);
    }
}

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}