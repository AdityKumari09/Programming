#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int value;

    // Node* ptr_previous_node;
    struct node* ptr_previous_node;

	// Node* ptr_next_node;
	struct node* ptr_next_node;
};

typedef struct node Node;

struct linked_list_int
{
    Node* ptr_head_node;
    Node* ptr_tail_node;
    int size;
};

typedef struct linked_list_int Linked_List_int;

void create_empty_Linked_List_int(Linked_List_int*);
bool Linked_List_int_is_empty(Linked_List_int*);
void Linked_List_int_add(Linked_List_int*, int);
int Linked_List_int_get(Linked_List_int*, int);
int Linked_List_int_size(Linked_List_int*);
void Linked_List_int_set(Linked_List_int*, int, int);
// Skip Linked_List_int_remove_range() - Too complicated.
void destroy_Linked_List_int(Linked_List_int*);
void Linked_List_int_add_at_index(Linked_List_int*, int, int);
void Linked_List_int_print_forward(Linked_List_int* ptr);
void Linked_List_int_print_backward(Linked_List_int* ptr);

int main(void)
{
	Linked_List_int a1;
	create_empty_Linked_List_int(&a1);

	printf("---------------------------------------------------------------\n");

	printf(Linked_List_int_is_empty(&a1) ? "true\n" : "false\n");

	printf("---------------------------------------------------------------\n");

	Linked_List_int_add(&a1, 10);
	Linked_List_int_add(&a1, 20);
	Linked_List_int_add(&a1, 30);

	printf("%d\n", Linked_List_int_get(&a1, 1));

	printf("---------------------------------------------------------------\n");

	printf(Linked_List_int_is_empty(&a1) ? "true\n" : "false\n");

	printf("%d\n", Linked_List_int_size(&a1));

	printf("---------------------------------------------------------------\n");

	for (int i = 0; i < Linked_List_int_size(&a1); ++i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	printf("---------------------------------------------------------------\n");

	Linked_List_int_set(&a1, 2, 40);

	for (int i = 0; i < Linked_List_int_size(&a1); ++i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	printf("---------------------------------------------------------------\n");

	Linked_List_int_add_at_index(&a1, 1, 50);

	for (int i = 0; i < Linked_List_int_size(&a1); ++i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	{
    	printf("%d ", Linked_List_int_get(&a1, i));
	}

	putchar('\n');

	printf("---------------------------------------------------------------\n");

	// Array_List_int_clear(&a1);

	// printf("%d\n", Array_List_int_size(&a1));

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_add(&a1, 10);
	// Array_List_int_add(&a1, 20);
	// Array_List_int_add(&a1, 30);
	// Array_List_int_add(&a1, 40);
	// Array_List_int_add(&a1, 10);
	// Array_List_int_add(&a1, 20);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	// {
    // 	printf("%d ", Linked_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// printf(Array_List_int_contains(&a1, 30) ? "true\n" : "false\n");

	// printf(Array_List_int_contains(&a1, 50) ? "true\n" : "false\n");

	// printf("---------------------------------------------------------------\n");

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	// {
    // 	printf("%d ", Linked_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// printf("%d\n", Array_List_int_index_of(&a1, 10));

	// printf("%d\n", Array_List_int_index_of(&a1, 30));

	// printf("%d\n", Array_List_int_index_of(&a1, 50));

	// printf("---------------------------------------------------------------\n");

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// for (int i = Linked_List_int_size(&a1) - 1; i >= 0; --i)
	// {
    // 	printf("%d ", Linked_List_int_get(&a1, i));
	// }

	// putchar('\n');

	// printf("%d\n", Array_List_int_last_index_of(&a1, 10));

	// printf("%d\n", Array_List_int_last_index_of(&a1, 30));

	// printf("%d\n", Array_List_int_last_index_of(&a1, 50));

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_remove(&a1, 3);

	// int* array = Array_List_int_to_array(&a1);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", array[i]);
	// }

	// putchar('\n');

	// free(array);

	// printf("---------------------------------------------------------------\n");

	destroy_Linked_List_int(&a1);

	return 0;

}	


void create_empty_Linked_List_int(Linked_List_int* ptr)
{
    ptr->ptr_head_node = NULL;
    ptr->ptr_tail_node = NULL;
    ptr->size = 0;
}

bool Linked_List_int_is_empty(Linked_List_int* ptr)
{
    return ptr->size == 0;
}

void Linked_List_int_add(Linked_List_int* ptr, int n)
{
	Node* ptr_new_node = malloc(sizeof (Node));

	if (ptr_new_node == NULL)
	{
		printf("\n-------------------------------------");
    	printf("\nLinked_List_int_add()");
    	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	ptr_new_node->value = n;
	ptr_new_node->ptr_next_node = NULL;

	if (ptr->size == 0)
	{
		ptr_new_node->ptr_previous_node = NULL;
		ptr->ptr_head_node = ptr_new_node;
		ptr->ptr_tail_node = ptr_new_node;
	}

	else
	{
		ptr->ptr_tail_node->ptr_next_node = ptr_new_node;
		ptr_new_node->ptr_previous_node = ptr->ptr_tail_node;
		ptr->ptr_tail_node = ptr_new_node;
	}

	++(ptr->size);

}

int Linked_List_int_get(Linked_List_int* ptr, int i)
{
	if ((i < 0) || (i >= ptr->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nLinked_List_int_get()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	Node* ptr_current_node;

	if (i < ptr->size / 2)
	{
		ptr_current_node = ptr->ptr_head_node;

		for (int j = 0; j < i; ++j)
		{
			ptr_current_node = ptr_current_node->ptr_next_node;
		}
	}

	else
	{
		ptr_current_node = ptr->ptr_tail_node;

		for (int j = 0; j < ptr->size - i - 1; ++j)
		{
			ptr_current_node = ptr_current_node->ptr_previous_node;
		}
	}

	return ptr_current_node->value;

}

int Linked_List_int_size(Linked_List_int* ptr)
{
	return ptr->size;
}

void Linked_List_int_set(Linked_List_int* ptr, int i, int n)
{
	if ((i < 0) || (i >= ptr->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nLinked_List_int_set()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	Node* ptr_current_node;

	if (i < ptr->size / 2)
	{
		ptr_current_node = ptr->ptr_head_node;

		for (int j = 0; j < i; ++j)
		{
			ptr_current_node = ptr_current_node->ptr_next_node;
		}
	}

	else
	{
		ptr_current_node = ptr->ptr_tail_node;

		for (int j = 0; j < ptr->size - i - 1; ++j)
		{
			ptr_current_node = ptr_current_node->ptr_previous_node;
		}
	}
	
	ptr_current_node->value = n;
}

void Linked_List_int_add_at_index(Linked_List_int* ptr, int i, int n)
{
	if ((i < 0) || (i > ptr->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nLinked_List_int_add_at_index()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	Node* ptr_new_node = malloc(sizeof (Node));

	if (ptr_new_node == NULL)
	{
		printf("\n-------------------------------------");
    	printf("\nLinked_List_int_add()");
    	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	ptr_new_node->value = n;

	if (ptr->size == 0)
	{
		ptr_new_node->ptr_next_node = NULL;
		ptr_new_node->ptr_previous_node = NULL;
		ptr->ptr_head_node = ptr_new_node;
		ptr->ptr_tail_node = ptr_new_node;
	}

	else
	{
		if (i == 0)
		{
			ptr_new_node->ptr_previous_node = NULL;
			ptr->ptr_head_node->ptr_previous_node = ptr_new_node;
			ptr_new_node->ptr_next_node = ptr->ptr_head_node;
			ptr->ptr_head_node = ptr_new_node;
		}

		else if (i == ptr->size)
		{
			ptr_new_node->ptr_previous_node = ptr->ptr_tail_node;
			ptr_new_node->ptr_next_node = NULL;
			ptr->ptr_tail_node->ptr_next_node = ptr_new_node;
			ptr->ptr_tail_node = ptr_new_node;
		}

		else
		{
			Node* ptr_current_node;
			
			if (i <= ptr->size / 2)
			{
				ptr_current_node = ptr->ptr_head_node;

	        	for (int j = 0; j < i - 1; ++j)
	        	{
	        		ptr_current_node = ptr_current_node->ptr_next_node;
	        	}
			}

			else
			{
				ptr_current_node = ptr->ptr_tail_node;

	        	for (int j = 0; j < ptr->size - i; ++j)
	        	{
	        		ptr_current_node = ptr_current_node->ptr_previous_node;
	        	}
			}	

			ptr_new_node->ptr_previous_node = ptr_current_node;
			ptr_new_node->ptr_next_node = ptr_current_node->ptr_next_node;
			ptr_current_node->ptr_next_node->ptr_previous_node = ptr_new_node;
			ptr_current_node->ptr_next_node = ptr_new_node;
		}
	}

	++(ptr->size);

}

void destroy_Linked_List_int(Linked_List_int* ptr)
{
    while (ptr->ptr_head_node != NULL)
    {
        Node* ptr_temp = ptr->ptr_head_node;
        ptr->ptr_head_node = ptr->ptr_head_node->ptr_next_node;
        free(ptr_temp);
    }
}