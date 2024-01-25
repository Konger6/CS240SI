# **Student Record Handler in C**

## **Overview**

This program in C is designed to manage student records. It reads student information from a file, calculates their expected graduation year, and then writes this information to another file. The program demonstrates the usage of file I/O operations in C, struct usage, and basic arithmetic operations.

## **Code Explanation**

1. **Struct Definition (`Student`):** A `Student` struct is defined with `studentID`, `name`, `age`, and `gpa`.

2. **Reading from a File (`readStudents`):**
   - Uses `fscanf` to read from a file pointed to by `fptr`.
   - Reads student data formatted as `ID, Name, Age, GPA`.
   - Continues reading until the end of the file (EOF).

3. **Calculating Graduation Year (`calculateGraduationYear`):**
   - Calculates the expected graduation year based on the current year (assumed as 2024) and typical graduation age (22).

4. **Writing to a File (`writeGraduationFile`):**
   - Uses `fprintf` to write student information along with the calculated graduation year to the output file.

5. **Main Function (`main`):**
   - Handles opening of the input file (`students.txt`) and output file (`graduation.txt`).
   - Reads student records from the input file.
   - Creates a sample student record and calculates its graduation year.
   - Writes the student's information to the output file.
   - Closes the file streams.

## **File I/O Tips in C**

- **Opening a File:** Use `fopen()` to open a file. Always check if the file was opened successfully to avoid errors.

- **Reading from a File:** 
  - Use `fscanf()` for formatted input. 
  - Check the return value of `fscanf()` to ensure correct data read and to detect EOF.

- **Writing to a File:** 
  - Use `fprintf()` for formatted output to a file. 
  - Ensure the file is open in the correct mode (e.g., 'w' for writing).

- **Closing a File:** Always close files using `fclose()` to free resources.

- **Error Handling:** Use `perror()` to print error messages if file operations fail.

- **Buffer Sizes:** Be cautious with buffer sizes (like `MAX_NAME_LENGTH`) to prevent buffer overflows.

- **File Pointers:** Reset file pointers (like `inputFile`) to `NULL` after closing the file for safety.

## **Final Notes**

This program is a basic demonstration and should be expanded with error handling and dynamic memory management for practical use. Feel free to modify and extend the functionality as needed.
