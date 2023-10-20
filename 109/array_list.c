#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arr[1000];
int size = 0;

void add_to_array_list(int);
int get_from_array_list(int);
bool is_array_list_empty(void);
int size_of_array_list(void);
void add_to_array_list_at_index(int, int);

int main(void)
{
    printf("%s\n", is_array_list_empty() ? "true" : "false");

    add_to_array_list(10);
    add_to_array_list(20);
    add_to_array_list(30);

    printf("%d\n", get_from_array_list(1));

    printf("%s\n", is_array_list_empty() ? "true" : "false");

    printf("%d\n", size_of_array_list());

    for (int i = 0; i < size_of_array_list(); ++i)
    {
        printf("%d ", get_from_array_list(i));
    }

    printf("\n");

    add_to_array_list_at_index(2, 40);

    for (int i = 0; i < size_of_array_list(); ++i)
    {
        printf("%d ", get_from_array_list(i));
    }

    printf("\n");

    return 0;
}

void add_to_array_list(int n)
{
    arr[size] = n;
    ++size;
}

int get_from_array_list(int i)
{
    if ((i < 0) || (i >= size))
    {
        exit(EXIT_FAILURE);
    }

    return arr[i];
}

bool is_array_list_empty(void)
{
    return size == 0;
}

int size_of_array_list(void)
{
    return size;
}

void add_to_array_list_at_index(int, int)
{
    
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// int arr[1000];
// int size = 0;

// void add_to_array_list(int);
// int get_from_array_list(int);
// bool is_array_list_empty(void);
// int size_of_array_list(void);

// int main(void)
// {
//     printf("%s\n", is_array_list_empty() ? "true" : "false");

//     add_to_array_list(10);
//     add_to_array_list(20);
//     add_to_array_list(30);

//     printf("%d\n", get_from_array_list(1));

//     printf("%s\n", is_array_list_empty() ? "true" : "false");

//     printf("%d\n", size_of_array_list());

//     for (int i = 0; i < size_of_array_list(); ++i)
//     {
//         printf("%d ", get_from_array_list(i));
//     }

//     return 0;
// }

// void add_to_array_list(int n)
// {
//     arr[size] = n;
//     ++size;
// }

// int get_from_array_list(int i)
// {
//     if ((i < 0) || (i >= size))
//     {
//         exit(EXIT_FAILURE);
//     }

//     return arr[i];
// }

// bool is_array_list_empty(void)
// {
//     return size == 0;
// }

// int size_of_array_list(void)
// {
//     return size;
// }


// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>

// int arr[1000];
// int size = 0;

// void add(int);
// int get(int);
// bool is_empty(void);

// int main(void)
// {
//     printf("%s\n", is_empty() ? "true" : "false");

//     add(10);
//     add(20);
//     add(30);

//     printf("%d\n", get(1));

//     printf("%s\n", is_empty() ? "true" : "false");

//     return 0;
// }

// void add(int n)
// {
//     arr[size] = n;
//     ++size;
// }

// int get(int i)
// {
//     return arr[i];
// }

// bool is_empty(void)
// {
//     return size == 0;
// }

// #include <stdio.h>

// int arr[1000];
// int size = 0;

// void add(int);
// int get(int);

// int main(void)
// {
//     add(10);
//     add(20);
//     add(30);

//     printf("%d\n", get(1));

//     return 0;
// }

// void add(int n)
// {
//     arr[size] = n;
//     ++size;
// }

// int get(int i)
// {
//     return arr[i];
// }
