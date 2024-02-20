#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int value;
    struct node *next_ptr;
};

/*
Functions you will write
struct node* create_node(int value);
This function should allocate memory for a new node, 
assert that the allocation was successful, initialize the node's value with value, 
and set its next_ptr to NULL. The function should return a pointer to the newly created node.
This function must assert that the memory allocation does not return NULL.

void append_node(struct node** head, int value);
This function should append a new node with the specified value
to the end of the linked list. It takes a double pointer to the head of the list to 
be able to modify the list head if necessary (e.g., if the list is initially empty). 
If the list is empty, the new node becomes the head; otherwise, 
the new node is added after the current tail. The function does not return a value. 
This function should assert that the head pointer is not NULL.

void push_node(struct node** head, int value);
This function should push a new node with the specified value to the beginning 
of the linked list. It takes a double pointer to the head of the list to modify the head 
of the list. The new node is inserted before the current head,
and then the head pointer is updated to point to the new node. 
This function does not return a value. This function should assert that the head pointer 
is not NULL.

void delete_list(struct node** head);
This function should delete all nodes in the linked list and free the
memory allocated for them. It takes a double pointer to the head of the list 
so it can set the head to NULL after all nodes have been deleted. It traverses the list,
frees each node, and sets the head pointer to NULL at the end. 
The function does not return a value. This function should assert that the head pointer 
is not NULL.

void print_list(struct node* head);
This function should print all the values in the linked 
list in order from the head to the last node. It takes a single pointer to the 
head of the list and traverses the list, printing each node's value followed by an arrow (->). The function ends by printing NULL after the last node to indicate the end of the list. This function does not return a value and should assert that the head pointer is not NULL.
*/

int main() {
    struct node* head = NULL;

    // Append nodes to the list
    append_node(&head, 10);
    append_node(&head, 20);
    append_node(&head, 30);

    // Push a node to the beginning of the list
    push_node(&head, 5);

    // Print the list
    printf("The linked list is:\n");
    print_list(head);

    // Delete the list
    delete_list(&head);

    // Print the list again to confirm deletion
    printf("The linked list after deletion is:\n");
    print_list(head);

    return 0;
}

/* 
output
The linked list is:
5 -> 10 -> 20 -> 30 -> NULL
The linked list after deletion is:
NULL
*/
