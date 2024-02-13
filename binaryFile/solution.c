#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Define the item structure
typedef struct {
    int id;
    char name[20];
    float price;
} item_t;

// Function to read an item from a binary file at a given index
item_t read_item(FILE* file, int index) {
    item_t item;
    fseek(file, index * sizeof(item_t), SEEK_SET);
    fread(&item, sizeof(item_t), 1, file);
    return item;
}

// Function to write an item to a binary file at a given index
void write_item(FILE* file, item_t item, int index) {
    fseek(file, index * sizeof(item_t), SEEK_SET);
    fwrite(&item, sizeof(item_t), 1, file);
}

// Function to display an item's details
void display_item(item_t item) {
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: $%.2f\n", item.price);
}

int main() {
    FILE *file = fopen("warehouse.bin", "wb+");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Example items
    item_t item1 = {1, "Item1", 10.99f};
    item_t item2 = {2, "Item2", 15.49f};

    // Write items to the file
    write_item(file, item1, 0);
    write_item(file, item2, 1);

    // Reset file pointer to the beginning of the file
    rewind(file);

    // Read and display items from the file
    item_t readItem;
    readItem = read_item(file, 0);
    display_item(readItem);
    readItem = read_item(file, 1);
    display_item(readItem);

    fclose(file);

    return 0;
}

/* 
Expected output
ID: 1
Name: Item1
Price: $10.99
ID: 2
Name: Item2
Price: $15.49
*/
