#include <stdio.h>
#include <stdbool.h>

bool target_is_found(int*, int);

int main(void)
{
    int arr[5];

    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    if (target_is_found(arr, target))
    {
        printf("%d is found\n", target);
    }

    else
    {
        printf("%d is not found\n", target);
    }

    return 0;
}

bool target_is_found(int* arr, int target)
{
    bool is_found = false;

    for (int i = 0; i < 5; ++i)
    {
        if (target == arr[i])
        {
            is_found = true;
        }
    }

    return is_found;
}

/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/

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
