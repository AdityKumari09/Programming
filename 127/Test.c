//linear search
#include <stdio.h>
#include <stdlib.h>

int find_index(int*, int, int, int);

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

    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    printf("%d\n", find_index(arr, n, 0, target));

    free(arr);

    return 0;
}

int find_index(int* arr, int n, int i, int target)
{
    if (i == n)
    {
        return -1;
    }

    else if (arr[i] == target)
    {
        return i;
    }

    else
    {
        return find_index(arr, n, i + 1, target);
    }

}