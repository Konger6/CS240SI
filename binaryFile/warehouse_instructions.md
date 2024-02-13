Warehouse Management System Assignment
Introduction
In this exercise, you will explore advanced binary file operations in C, focusing on efficient data storage and processing. Through the development of a warehouse management system, you'll learn to handle structured data, implement error handling, and enforce data integrity and constraints, simulating real-world applications.

Learning Objectives
Understand and manipulate structures in C for data representation.
Perform binary file I/O operations using fread() and fwrite() for efficient data access.
Implement error handling to ensure data integrity and manage operational constraints.
Manage data capacity with file manipulation techniques, preventing data overflow and maintaining system integrity.
Task Overview
Develop a program that manages inventory for a warehouse, represented by item structures. Your program will add items to the inventory, ensuring no duplicate IDs and respecting warehouse capacity limits.

Step-by-Step Instructions
1. Setup the Development Environment
Ensure a C compiler (e.g., GCC) is installed.
Create a new file named warehouse.c.
2. Define Data Structures and Error Codes
item_t Structure: Define this at the top of your warehouse.c file to represent warehouse items.

WarehouseErrorCode Enumeration: Define error codes for operation results, including success, duplicate ID error, and capacity error.

3. Implement Utility Functions
Read Function: item_t read_item(FILE* file, int index) reads an item from a given index.
Write Function: void write_item(FILE* file, item_t item, int index) writes an item to a specified index.
Display Function: void display_item(item_t item) prints item details to the console.
Existence Check: int item_exists(FILE* file, int id) verifies if an item ID already exists.
Add Item: int add_item_to_warehouse(FILE* file, item_t newItem) adds an item, checking for duplicates and capacity.
4. Main Function Logic
Open warehouse.bin in wb+ mode.
Add a few item_t instances, handling errors for duplicates or capacity.
Read and display items to ensure data integrity.
5. Compile and Test
Compile with: gcc warehouse.c -o warehouse -Wall -std=c99.
Run your program to verify correct functionality.
Additional Notes
Use assert() to validate assumptions, such as ensuring file opening operations succeed.
Be mindful of MAX_WAREHOUSE_SIZE when adding items, to prevent exceeding warehouse capacity.
