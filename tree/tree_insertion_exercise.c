
#include <stdio.h>
#include <stdlib.h>

// Define the structure of a tree node
typedef struct node {
    int value;
    struct node *left;
    struct node *right;
} node;

// Function prototype for creating a new node
node *create_node(int value);

// Your tasks:
// 1. Write an iterative approach to insert nodes in the binary tree.
//    void insert_node_iterative(node **root, node *new_node);
//
// 2. Write a recursive approach to insert nodes in the binary tree.
//    void insert_node_recursive(node **root, node *new_node);
//

int main() {
    // Create the root of the tree
    node *root = NULL;

    // Instructions for students:
    // 1. Use the 'create_node' function to create new nodes.
    // 2. Insert the nodes into the tree using both iterative and recursive approaches you've written.
    //    For example, insert numbers 5, 3, 2, 4, 7, 6, 8 in the tree and print the tree structure in some way.
    // 3. After inserting, verify the tree's structure by implementing and calling a tree print function
    //    (you may choose in-order traversal to print the tree so that the output is sorted).
    
    return 0;
}

// Function to create a new node with given value
node *create_node(int value) {
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit program if memory allocation fails
    }
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Placeholders for student tasks
// void insert_node_iterative(node **root, node *new_node) { /* Your code here */ }
// void insert_node_recursive(node **root, node *new_node) { /* Your code here */ }
