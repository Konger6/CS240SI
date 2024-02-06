#include <stdio.h>

// Declare a union that can be accessed as both an unsigned short and two unsigned chars
union endian_converter {
    unsigned short number;       // For the whole 2-byte number
    unsigned char byte[2];       // For individual bytes
};

unsigned short endian2_conversion(unsigned short number) {
    union endian_converter converter; // Instantiate the union
    converter.number = number;        // Set the whole number

    // Now, swap the bytes using the char array without bitwise operations
    unsigned char temp = converter.byte[0];
    converter.byte[0] = converter.byte[1];
    converter.byte[1] = temp;

    // Return the converted number
    return converter.number;
}

int main() {
    unsigned short original = 0x1234;
    unsigned short converted = endian2_conversion(original);

    printf("Original: 0x%X, Converted: 0x%X\n", original, converted);
    return 0;
}
