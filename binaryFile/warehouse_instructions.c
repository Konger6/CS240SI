/*
Introduction to the Assignment
In this exercise, you'll learn about handling binary files in C, which involves reading from and writing to files in a format that's efficient for the computer to process but not human-readable. You'll work with structures that represent data records, similar to how you might handle data in a real-world application.

Learning Objectives
Understand and manipulate structures in C.
Perform binary file I/O operations using fread() and fwrite().
Use assert() to validate assumptions in your code.
Task Overview
You will create a simple program that manages a list of items in a warehouse, each represented by a structure. Your program will need to:

Define a structure item_t to represent an item with the following fields:

int id - Unique identifier for the item.
char name[20] - Name of the item.
float price - Price of the item.
Implement functions to:

Read an item from a binary file.
Write an item to a binary file.
Display item details on the console.
Step-by-Step Instructions
1. Setup the Development Environment
Ensure you have a C compiler installed and ready to use (e.g., GCC). Create a new file named warehouse.c for your code.

2. Define the item_t Structure
At the top of your warehouse.c file, define the item_t structure as described above.

3. Implement the Read Function
Create a function item_t read_item(FILE* file, int index) that reads an item_t from the given binary file at the specified index. Use fseek to navigate to the correct position based on the index and sizeof(item_t).

4. Implement the Write Function
Create a function void write_item(FILE* file, item_t item, int index) that writes an item_t to the given file at the specified index.

5. Implement the Display Function
Create a function void display_item(item_t item) that prints the details of an item to the console.

6. Main Function Logic
In your main() function:

Open a binary file named warehouse.bin in read and write mode.
Create a few item_t instances and write them to the file using your write_item function.
Then, read these items back from the file and display their details using your display_item function.
7. Compile and Test Your Program
Compile your program using a C compiler. For GCC, you can use the following command:

gcc warehouse.c -o warehouse -Wall -std=c99
Run your program and verify that it correctly reads from and writes items to the binary file, and that item details are correctly displayed.
*/
