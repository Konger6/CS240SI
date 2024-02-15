Warehouse Management System Assignment

- Learning Objectives
Understand and manipulate structures in C for data representation.
Perform binary file I/O operations using fread() and fwrite() for efficient data access.
Implement error handling to ensure data integrity and manage operational constraints.
Manage data capacity with file manipulation techniques, preventing data overflow and maintaining system integrity.

- Task Overview
Develop a program that manages inventory for a warehouse, represented by item structures. Your program will add items to the inventory, ensuring no duplicate IDs and respecting warehouse capacity limits.

Step-by-Step Instructions
1. Setup the Development Environment (not for in session)
Create a new file named warehouse.c. (vim warehouse.c)
To remove later, rm warehouse.c
To compile gcc -o warehouse warehouse.c

3. Define Data Structures and Error Codes
item_t Structure: Define this at the top of your warehouse.c file to represent warehouse items.
// Define the item structure 

typedef struct { 

    int id; 

    char name[20]; 

    float price; 

} item_t; 

WarehouseErrorCode Enumeration: Define error codes for operation results, including success, duplicate ID error, and capacity error.

//enum for error codes 

typedef enum { 

    SUCCESS = 0,        // No error, operation successful 

    ERROR_DUPLICATE_ID, // Duplicate item ID error 

    ERROR_CAPACITY,     // Warehouse capacity exceeded error 

    ERROR_FILE         // File-related error (optional, for future use) 

} WarehouseErrorCode; 


3. Implement Utility Functions
- Read Function: item_t read_item(FILE* file, int index) reads an item from a given index.

// Function to read an item from a binary file at a given index
item_t read_item(FILE* file, int index) {
    item_t item;
    fseek(file, index * sizeof(item_t), SEEK_SET);
    fread(&item, sizeof(item_t), 1, file);
    return item;
}
- Display Function: void display_item(item_t item) prints item details to the console.

// Function to display an item's details
void display_item(item_t item) {
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: $%.2f\n", item.price);
}

- Existence Check: int item_exists(FILE* file, int id) verifies if an item ID already exists.
- Add Item: int add_item_to_warehouse(FILE* file, item_t newItem) adds an item, checking for duplicates and capacity.
- Capacity is already defined as #define MAX_WAREHOUSE_SIZE 1024
  
4. Main Function Logic
Open warehouse.bin in wb+ mode.
Add a few item_t instances, handling errors for duplicates or capacity.
Read and display items to ensure data integrity.

6. Compile and Test
Compile with: gcc  -Wall -std=c99 -o warehouse  warehouse.c
Run your program to verify correct functionality.

Additional Notes
Use assert() to validate assumptions, such as ensuring file opening operations succeed.
Be mindful of MAX_WAREHOUSE_SIZE when adding items, to prevent exceeding warehouse capacity.
