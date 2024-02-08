#include <stdio.h>

void swap(int *a, int*b); //function prototype

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Example usage of the swap function
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // Explaining what *p gives if p holds the address of an integer
    int value = 30;
    int *p = &value;
    printf("\nIf a pointer 'p' holds the address of 'value', *p gives you: %d\n", *p);

    // Relationship between arrays and pointers
    printf("\nArrays and Pointers:\n");
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    printf("Using pointer to traverse the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Accessing array elements using pointer arithmetic
    }

    // Printing each character of a string using a pointer
    printf("\n\nPrinting characters of a string using a pointer:\n");
    char str[] = "Hello, World!\n";
    char *strPtr = str; // Pointer to the first character of the string
    while (*strPtr != '\0') {
        printf("%c", *strPtr); // Dereferencing the pointer to print each character
        strPtr++; // Moving to the next character
    }

    return 0;
}
