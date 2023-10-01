#include <stdio.h>

int main(void)
{
    int arr[10];

    // Due to exception 1, arr is not converted to pointer
    printf("Size of the array is %zu bytes\n", sizeof arr);
    printf("Size of the first element is %zu\n", sizeof arr[0]);

    printf("The starting address of the entire array is %p\n", (void*) &arr);
    printf("The starting address of the first element is %p\n", (void*) &(arr[0]));

    return 0;
}