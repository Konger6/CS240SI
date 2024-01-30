// my_array.c
// Purpose: To help students learn about structures, arrays, and string operations in C.
// Written by Sophia Konger

#include <stdio.h>
#include <string.h>

// Step 1: Define a simple structure
struct point {
    int x;
    int y;
};

// Step 2: Function to initialize a point structure
void init_point(struct point *p, int x, int y) {
    p->x = x;
    p->y = y;
}

// Step 3: Define an array of 'point' structures
#define ARRAY_SIZE 5
struct point points[ARRAY_SIZE];

// Step 4: Function to display a point
void print_point(struct point p) {
    printf("Point: x = %d, y = %d\n", p.x, p.y);
}

// Main function
int main() {
    // Task 1: Initialize each element in 'points' array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        init_point(&points[i], i, i+1); // Example initialization
    }

    // Task 2: Display all points
    for (int i = 0; i < ARRAY_SIZE; i++) {
        print_point(points[i]);
    }

    // Additional Learning: Understanding String Operations
    // Task 3: Create a struct for storing a name
    struct person {
        char name[50];
    };

    struct person student;
    
    // Task 4: Use strcpy to initialize 'name' and understand its memory layout
    strcpy(student.name, "Alice");
    
    // Task 5: Print the name
    printf("Student's Name: %s\n", student.name);

    // Discussion Questions:
    // Q1. How is the 'struct point' array laid out in memory?
        /* the first int x will lay in the first 4 bytes of memory, and second int y will lay in next 4 bytes of memory */
    // Q2. How does strcpy work and how is the 'name' string stored in memory?
        /* strcoy function copies the string pointed to by src, including the terminating null byte ('\0'), 
        to the buffer pointed to by dest.
        The name field is a character array (char array) of fixed size 50. 
        This means it allocates 50 contiguous bytes in memory, regardless of the actual length of the string it holds.
        When the strcpy function is used to copy "Alice" into student.name, 
        it lays out the characters of "Alice" sequentially in the first few bytes of this array.
        */
    // Q3. How would i run and compile this file into an executable in the terminal with 
    // all warnings enabled, warnings turned to errors, and std of 99?
        /* gcc -Wall -Werror -std=c99 -o my_array my_array.c */

    return 0;
}
