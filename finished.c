#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    int studentID;
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
} Student;

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

    fclose(inputFile);

    return 0;
}
