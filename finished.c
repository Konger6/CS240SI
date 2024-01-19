#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    int studentID;
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
} Student;

   /*
 TIPS: A couple of common practices in CS 240, is to check the fscanf to make sure that it is equal to the amount of items you are supposed to have.
    I am arbitrarily doing this by making sure its not equal to -1 or EOF. But it's still a good idea to check if its 4. I also did %99 for the student name, 99 is an the max_name_length -1.
    You can put max_name_length-1 or 99. Either one works. 

    I encourage you to copy this into a file in your terminal with the students.txt, and play around with it to see what works and what doesnt.
    Have fun, and feel free to use the discussions tab to ask questions!

    This can be done my ssh into your terminal, and then you can adding this file by doing vim finished.c, and vim students.txt to create the other file. You can copy and past this code straight into it.
    gcc the finished.c code into an executable (look it up), and then fun ./finished.c
    You can remove it when you are done by doing rm and then the file name.
    */


void readStudents(FILE *fptr) {
    Student student;
    while (fscanf(fptr, "%d,%99[^,],%d,%f", &student.studentID, student.name, &student.age, &student.gpa) != EOF) {
        printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\n", student.studentID, student.name, student.age, student.gpa);
    }
}

int calculateGraduationYear(int age) {
    int currentYear = 2024; // Assuming the current year is 2024
    int typicalGradAge = 22; // Typical graduation age
    return currentYear + (typicalGradAge - age);
}

void writeGraduationFile(FILE *fptr, Student student, int graduationYear) {
    fprintf(fptr, "%d, %s, %d, %.2f, %d\n", student.studentID, student.name, student.age, student.gpa, graduationYear);
}

int main() {
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("students.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    Student student = {2423, "Debbie", 19, 2.0};

    readStudents(inputFile);

    outputFile = fopen("graduation.txt", "w");
    if (outputFile == NULL) {
      perror("Error opening ouput file");
      return 1;
    }
    int graduationYear = calculateGraduationYear(student.age);
    writeGraduationFile(outputFile, student, graduationYear);

    inputFile = NULL;
    fclose(inputFile);

    return 0;
}
