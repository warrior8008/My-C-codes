#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input the marks
    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    // Validate input and assign grade
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 50 && marks < 60) {
        grade = 'E';
    } else if (marks >= 0 && marks < 50) {
        grade = 'F';
    } else {
        printf("Invalid marks entered.\n");
        return 1;
    }

    // Print the grade
    printf("Grade: %c\n", grade);

    return 0;
}