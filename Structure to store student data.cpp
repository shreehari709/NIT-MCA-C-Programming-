#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; 
    float totalMarks;
    float averageMarks;
};

int main() {
    struct Student students[5];
    const char *subjects[] = {"Math", "English", "Physics", "Chemistry", "Computer"};
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        students[i].totalMarks = 0; 
        for (j = 0; j < 5; j++) {
            printf("Enter marks in %s: ", subjects[j]);
            scanf("%f", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j]; 
        }

        students[i].averageMarks = students[i].totalMarks / 2.0;
    }

    printf("\nStudent Results:\n");
    printf("------------------------------------------------------------\n");
    printf("Roll No | Name               | Total Marks | Average Marks\n");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 2; i++) {
        printf("%-8d| %-18s| %-12.2f| %.2f\n",
               students[i].rollNumber,
               students[i].name,
               students[i].totalMarks,
               students[i].averageMarks);
    }

    return 0;
}
