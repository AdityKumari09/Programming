// Structure
#include <stdio.h>

struct student
{
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

typedef struct student Student;

int main(void)
{
    Student s;

    printf("Enter the detail of student\n");
    
    printf("Roll Number: ");
    scanf("%d", &(s.roll_number));

    printf("Marks1: ");
    scanf("%lf", &(s.marks1));

    printf("Marks2: ");
    scanf("%lf", &(s.marks2));

    printf("Marks3: ");
    scanf("%lf", &(s.marks3));

    printf("\n");

    printf("Roll Number: %d\n", (s.roll_number));
    printf("Marks1: %0.1lf\n", (s.marks1));
    printf("Marks2: %0.1lf\n", (s.marks2));
    printf("Marks3: %0.1lf\n", (s.marks3));

    return 0;
}
/*
    Enter the detail of student 1 :-
    Roll Number: 100
    Marks1: 81.5
    Marks2: 88.0
    Marks3: 90.5

    Enter the detail of student 2 :-
    Roll Number: 101
    Marks1: 80.5
    Marks2: 75.0
    Marks3: 78.5 
*/