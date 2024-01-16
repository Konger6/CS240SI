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
    // Implement reading logic using fscanf and then print out each student
}

int calculateGraduationYear(int age) {
    // Implement the logic to calculate graduation year
}

void writeGraduationFile(FILE *fptr, Student student, int graduationYear) {
    // Implement writing logic using fprintf
}

int main() {
    FILE *inputFile;
    FILE *outputFile;

    //open the input file on read only mode
    //Create a student, with studentID 2345, name Debbie, age 19, and gpa 2.0
    //read the students from the input file
    //then, calcualte the graduation year from the student created
    //then write to graduation file using the student, into the output file.
    //Finally readStudents again but with the output file.
}
