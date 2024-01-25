# Cheap Meals Data Processor



## Overview

This C program reads nutritional information from a file, processes the data, and writes the sorted results to a new file. It is designed to sort food items by cost, helping users find the cheapest meals based on the provided data.

## File Structure

- `cheap_meals.c`: Main program file.
- `macros.txt`: Input file containing food items data.
- `sorted_macros.txt`: Output file with sorted food items.

## Data Format

The data in `macros.txt` should be formatted as follows:
calories|fat(g)|carbs(g)|protein(g)|$price

Example:
450|15g|45g|18.7g|$8.90


## Functionality

1. **Read Data:** Reads food items from `macros.txt` and stores them in an array.
2. **Filter by Cost:** Sorts the food items in ascending order of cost.
3. **Write Data:** Writes the sorted food items to `sorted_macros.txt`.

## How to Compile and Run

1. Compile the program using GCC:
   ```bash
   gcc -o cheap_meals cheap_meals.c

2. Run the program
   ./cheap_meals macros.txt

