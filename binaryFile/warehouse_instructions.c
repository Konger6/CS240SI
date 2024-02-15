/*
Warehouse Management System Assignment

- Learning Objectives
Understand and manipulate structures in C for data representation.
Perform binary file I/O operations using fread() and fwrite() for efficient data access.
Implement error handling to ensure data integrity and manage operational constraints.
Manage data capacity with file manipulation techniques, preventing data overflow and maintaining system integrity.

- Task Overview
Develop a program that manages inventory for a warehouse, represented by item structures. Your program will add items to the inventory, ensuring no duplicate IDs and respecting warehouse capacity limits.

Setup the Development Environment (not for in session)
Create a new file named warehouse.c. (vim warehouse.c)
To remove later, rm warehouse.c
To compile gcc -o warehouse warehouse.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_WAREHOUSE_SIZE 1024 // Maximum size of the warehouse file in bytes

/*
3. Define Data Structures and Error Codes
item_t Structure: Define this at the top of your warehouse.c file to represent warehouse items.
*/
typedef struct { 
    int id; 
    char name[20]; 
    float price; 
} item_t; 

//enum for error codes 
typedef enum { 
    SUCCESS = 0,        // No error, operation successful 
    ERROR_DUPLICATE_ID, // Duplicate item ID error 
    ERROR_CAPACITY,     // Warehouse capacity exceeded error 
    ERROR_FILE         // File-related error (optional, for future use) 
} WarehouseErrorCode; 

/*
3. Implement Utility Functions
- Read Function: item_t read_item(FILE* file, int index) reads an item from a given index.

// Function to read an item from a binary file at a given index
*/
item_t read_item(FILE* file, int index) {
    item_t item;
    fseek(file, index * sizeof(item_t), SEEK_SET);
    fread(&item, sizeof(item_t), 1, file);
    return item;
}

/*
- Display Function: void display_item(item_t item) prints item details to the console.
// Function to display an item's details
*/
void display_item(item_t item) {
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: $%.2f\n", item.price);
}

/*
    TODO:
    int item_exists: verifies if an item ID already exists within the file
*/
int item_exists(FILE* file, int id) {
    return 0;
}

/*
    TODO:
    function to add an item, checking for duplicates and if it hits capacity. If it hits capacity dont add it to the file,
    if not append to the file.
    - Capacity is already defined as #define MAX_WAREHOUSE_SIZE 1024
*/
int add_item_to_warehouse(FILE *file, item_t newItem) {
    return 0
}

/*
Main Function Logic
Open warehouse.bin in wb+ mode.
Add a few item_t instances, handling errors for duplicates or capacity.
Read and display items to ensure data integrity.
*/
