/* solution.c - file to struct */
/* Made by Sophia Konger */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stddef.h>

#define MAX_FOOD_ITEMS 15

/*
 * Struct definition for food items. This will hold information about
 * each food item including calories, fat, carbs, protein, and price.
 */
typedef struct {
    int calories;
    int fat;
    int carbs;
    float protein;
    float price;
} FoodItem;

// Global array to store food items and a counter for the number of items.
FoodItem g_data_arr[MAX_FOOD_ITEMS];
int g_num_items = 0;

/*
 * Function to read data from a file and store it in the global array g_data_arr.
 * The function takes a filename as an argument and returns 0 on success, -1 on failure.
 */
int read_data(char *filename) {
    // Open the file for reading. If opening fails, print an error message and return -1.
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return -1;
    }

    // Temporary variables to store data read from the file.
    int calories;
    int fat;
    int carbs;
    float protein;
    float price;
    char temp;

     // Read the first line before entering the loop
    int res = fscanf(fp, "%d|%dg|%dg|%fg|$%f", &calories, &fat, &carbs, &protein, &price);

    // Read each line from the file until EOF is reached.
    while (res != EOF) {
        // Check if the number of items read is correct
        if (res != 5) {
            printf("Invalid file format or incomplete data at line %d.\n", g_num_items + 1);
            fclose(fp);
            return -1;
        }

        if (g_num_items >= MAX_FOOD_ITEMS) {
            printf("Maximum number of items reached.\n");
            break;
        }

        // Store the data in the array
        FoodItem item = {calories, fat, carbs, protein, price};
        g_data_arr[g_num_items++] = item;

        // Read the next line for the next iteration
        res = fscanf(fp, "%d|%dg|%dg|%fg|$%f", &calories, &fat, &carbs, &protein, &price);
    }

    // Close the file and return 0 to indicate success.
    fclose(fp);
    return 0;
}


/*
 * Function to sort the food items in the global array by price in ascending order.
 */
void filter_by_cost() {
   // Simple bubble sort algorithm to sort the items by cost.
    for (int i = 0; i < g_num_items - 1; i++) {
        for (int j = 0; j < g_num_items - i - 1; j++) {
          // Swap items if they are in the wrong order.
            if (g_data_arr[j].price > g_data_arr[j + 1].price) {
                FoodItem temp = g_data_arr[j];
                g_data_arr[j] = g_data_arr[j + 1];
                g_data_arr[j + 1] = temp;
            }
        }
    }
}


/*
 * Function to write the sorted data to a new file.
 * The function takes a filename as an argument and returns 0 on success, -1 on failure.
 */
int write_data(char *filename) {
   // Open the file for writing. If opening fails, print an error message and return -1.
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        perror("Error opening file");
        return -1;
    }


    // Write each item from the global array to the file in the specified format.
    for (int i = 0; i < g_num_items; i++) {
        fprintf(fp, "%d|%dg|%dg|%0.1fg|$%0.2f\n",
                g_data_arr[i].calories, g_data_arr[i].fat, g_data_arr[i].carbs,
                g_data_arr[i].protein, g_data_arr[i].price);
    }

  // Close the file and return 0 to indicate success.
    fclose(fp);
    return 0;
}


/*
 * Main function of the program.
 * It takes command line arguments, reads the data, sorts it, and writes it back to a file.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./cheap_meals [filename]\n");
        return -1;
    }

    if (read_data(argv[1]) != 0) {
        return -1;
    }

    filter_by_cost();

    if (write_data("output.txt") != 0) {
        return -1;
    }

    return 0;
}
