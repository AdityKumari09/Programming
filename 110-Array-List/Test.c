#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct array_list_int
{
    int* arr;
    int size;
    int capacity;
};

typedef struct array_list_int Array_List_int;

void create_empty_array_list_int(Array_List_int*);
void create_empty_array_list_int_with_initial_capacity(Array_List_int*, int);
void destroy_array_list_int(Array_List_int*);

int main(void)
{
    Array_List_int a;
    // create_empty_array_list_int(&a);

    create_array_list_int_with_initial_capacity(&a, 100);

    destroy_array_list_int(&a);

    return 0;
}

void create_empty_array_list_int(Array_List_int* ptr, int initial_ccapacity)
{
    ptr->arr = (int*) malloc(initial_capacity * sizeof (int));
    ptr->size = 0;
    ptr->capacity = initial_capacity;
}
