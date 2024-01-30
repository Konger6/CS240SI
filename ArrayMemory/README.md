my_array.c - C Programming Exercise
Author: Sophie Konger

Overview
This README accompanies the my_array.c programming exercise, aimed at enhancing understanding of structures, arrays, and string operations in C, as per concepts discussed in CS 240 Lecture 7 by Prof. Jeff Turkstra.

Key Lecture Concepts
Memory Layout in C
Structures and Arrays
String Handling
Null Terminators in Strings
Memory Management Techniques
Exercise Instructions
Header Inclusions: Include <stdio.h> and <string.h>.
Structure Definition: struct point with int x and int y.
Array of Structures: Global struct point points[ARRAY_SIZE].
Print Function: void print_point(struct point p).
Main Function: Initialize and display points.
String Operations: Utilize struct person for string handling.
Print Name: Display the name from struct person.
Discussion Questions: Focus on memory layout and strcpy function.
Compilation and Execution
Compile: gcc -Wall -Werror -std=c99 -o my_array my_array.c
Run: ./my_array
Additional Notes
Scope of Variables: Global vs Local.
Size Determination: Use of sizeof().
Safe String Copy: Proper use of strncpy().
Conclusion
This exercise is integral to CS 240, reinforcing core C programming concepts with a focus on data structures and efficient memory usage.
