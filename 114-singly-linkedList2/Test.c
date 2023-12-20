#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;

	// Node* ptr_next_node;
	struct node* ptr_next_node;
};

typedef struct node Node;

int main(void)
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers: ");

    Node* ptr_head_node = NULL;

    Node* ptr_current_node;
    Node* ptr_previous_node;

    for (int i = 0; i < n; ++i)
    {
        
    }

	return 0;
}