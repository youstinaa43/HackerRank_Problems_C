/* Write a program to create a structure to store the roll no., name, age and store the information of the students in array.
1 - - Write a function to print the names of all the students having age less than a specific age,
2 -Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    int age;
} Student;
void displayStudentByRollNo(Student students[], int n, int roll_no);
void printStudentsByAge(Student students[], int n, int specific_age);

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Print names of students with age less than a specific age\n");
        printf("2. Display details of a student by roll number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int specific_age;
                printf("Enter the specific age: ");
                scanf("%d", &specific_age);
                printStudentsByAge(students, n, specific_age);
                break;
            }
            case 2: {
                int roll_no;
                printf("Enter the roll number to search: ");
                scanf("%d", &roll_no);
                displayStudentByRollNo(students, n, roll_no);
                break;
            }
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
void printStudentsByAge(Student students[], int n, int specific_age)
{
    printf("Students with age less than %d:\n", specific_age);
    int found = 0,i;
    for ( i = 0; i < n; i++) {
        if (students[i].age < specific_age) {
            printf("Name: %s\n", students[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found with age less than %d.\n", specific_age);
    }
}
void displayStudentByRollNo(Student students[], int n, int roll_no)
{
    int i;
    for ( i = 0; i < n; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Details of student with roll no %d:\n", roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            return;
        }
    }
    printf("Student with roll no %d not found.\n", roll_no);
}
