#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct stack_int
{
    int* arr;
    int size;
    int capacity;
};

typedef struct stack_int Stack_int;

void Stack_int_create_empty(Stack_int*);
void Stack_int_destroy(Stack_int*);
int Stack_int_size(Stack_int*);
bool Stack_int_is_empty(Stack_int*);
void Stack_int_push(Stack_int*, int);
int Stack_int_peek(Stack_int*);
void Stack_int_pop(Stack_int*);
void Stack_int_clear(Stack_int*);

// The array will contain the elements of the stack in a top-to-bottom order.
int* Stack_int_to_array(Stack_int*);

int main(void)
{
    // s1 is a name of the object handler.
    Stack_int s1;
    Stack_int_create_empty(&s1);

    printf("---------------------------------------------------------------\n");

    printf(Stack_int_is_empty(&s1) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    Stack_int_push(&s1, 10);
    Stack_int_push(&s1, 20);
    Stack_int_push(&s1, 30);
    Stack_int_push(&s1, 40);

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    printf(Stack_int_is_empty(&s1) ? "true\n" : "false\n");

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_clear(&s1);

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_push(&s1, 10);
    Stack_int_push(&s1, 20);
    Stack_int_push(&s1, 30);
    Stack_int_push(&s1, 40);
    Stack_int_push(&s1, 50);
    Stack_int_push(&s1, 60);

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_pop(&s1);
    Stack_int_pop(&s1);

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    int* array = Stack_int_to_array(&s1);

    for (int i = 0; i < Stack_int_size(&s1); ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    while (!(Stack_int_is_empty(&s1)))
    {
        Stack_int_pop(&s1);
    }

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    free(array);

    Stack_int_destroy(&s1);

    return 0;
}

void Stack_int_create_empty(Stack_int* ptr)
{
    ptr->arr = malloc(sizeof (int));

    if (ptr->arr == NULL)
	{
    	printf("\n-------------------------------------");
    	printf("\ncreate_empty_Array_List_int()");
    	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

    ptr->size = 0;
    ptr->capacity = 1;
}

void Stack_int_destroy(Stack_int* ptr)
{
    free(ptr->arr);
}

int Stack_int_size(Stack_int* ptr)
{
    return ptr->size;
}

bool Stack_int_is_empty(Stack_int* ptr)
{
    return ptr->size == 0;
}

void Stack_int_push(Stack_int* ptr, int n)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nStack_int_push()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    (ptr->arr)[ptr->size] = n;
    ++(ptr->size);
}
int Stack_int_peek(Stack_int* ptr)
{
    if (ptr->size == 0)
        {
            printf("\n-------------------------------------");
            printf("\nStack_int_peek()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }

    return (ptr->arr)[ptr->size-1];
}

void Stack_int_pop(Stack_int* ptr)
{
    if (ptr->size == 0)
        {
            printf("\n-------------------------------------");
            printf("\nStack_int_poop()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }

    --(ptr->size);

    if (ptr->size < ptr->capacity / 2)
    {
        ptr->capacity = (ptr->size == 0) ? 1 : ptr->size;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nStack_int_poop()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }

    }    
}

void Stack_int_clear(Stack_int* ptr)
{
    ptr->arr = realloc(ptr->arr, sizeof (int));

	if (ptr->arr == NULL)
	{
    	printf("\n-------------------------------------");
    	printf("\nStack_clear()");
    	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	ptr->size = 0;
	ptr->capacity = 1;

    //void Stack_int_destroy(Stack_int*)
    //void Stack_int_create_empty(Stack_int*)

}

int* Stack_int_to_array(Stack_int* ptr)
{
    int* array = malloc(ptr->size * sizeof (int));

	for (int i = 0; i < ptr->size; ++i)
	{
    	array[i] = (ptr->arr)[ptr->size - 1 - i];
	}

	return array;
}


