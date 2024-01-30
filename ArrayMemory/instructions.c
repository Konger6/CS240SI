/*
written by Sophie Konger

instructions.c
This file contains instructions for a programming exercise aimed at teaching students about 
structures, arrays, and string operations in C.

Objective:
Understand and implement structures, arrays, and string operations in C.

2. Include Necessary Headers
   - At the top of your my_array.c file, include the standard input-output header and the string header:
     #include <stdio.h>
     #include <string.h>

3. Define a Structure
   - Define a simple structure named point with two integer members, x and y.

5. Declare an Array of Structures
   - Define a global array named points of type struct point with a fixed size (e.g., 5) in my_array.c.

6. Implement the Provided Print Function
   - Use the following function in my_array.c:
     void print_point(struct point p) {
         printf("Point: x = %d, y = %d\n", p.x, p.y);
     }

7. Main Function - Array Initialization
   - In the main function of my_array.c, use a loop to initialize each element in the points array.

8. Display the Points
   - In the main function, use a loop to display each point.

9. Understand String Operations
   - Define a structure named person in my_array.c that contains a string for a name.
   - In main, declare a struct person and use strcpy to copy a name into it.

10. Print the Name
    - Print the name from the person structure.

11. Discussion Questions
    - How is the struct point array laid out in memory?
    - How does strcpy work, and how is the name string stored in memory?
    - How would i run and compile this file into an executable in the terminal with 
          all warnings enabled, warnings turned to errors, and std of 99?

12. Compile and Run
    - Compile my_array.c and run the program.

Note:
This exercise is designed to help understand the use of structures, arrays, and strings in C.
*/

// This file is not meant to be compiled. It's a guide for students.
int main() {
    return 0;
}
