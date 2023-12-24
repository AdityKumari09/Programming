#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;

    // Node* ptr_next_node;
    struct node* ptr_next_node;
};

typedef struct node Node;

int main(void)
{
    
	putchar('\n');

    free(ptr_first_node);
    free(ptr_second_node);
    free(ptr_third_node);
    free(ptr_fourth_node);
    free(ptr_fifth_node);

    return 0;
}