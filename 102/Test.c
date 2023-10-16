#include <stdio.h>
#include <stdlib.h>

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
    Student* ptr1 = (Student*) malloc(sizeof (Student));
    Student* ptr2 = (Student*) malloc(sizeof (Student));

    // printf("Enter the details of student 1 :- \n");

    // printf("Roll number: ");
    // scanf("%d", &((*ptr1).roll_number));

    // printf("Marks1: ");
    // scanf("%lf", &((*ptr1).marks1));

    // printf("Marks2: ");
    // scanf("%lf", &((*ptr1).marks2));


    // printf("Marks3: ");
    // scanf("%lf", &((*ptr1).marks3));

    // printf("\n");

    // printf("Enter the details of student 2 :- \n");

    // printf("Roll number: ");
    // scanf("%d", &((*ptr2).roll_number));

    // printf("Marks1: ");
    // scanf("%lf", &((*ptr2).marks1));

    // printf("Marks2: ");
    // scanf("%lf", &((*ptr2).marks2));


    // printf("Marks3: ");
    // scanf("%lf", &((*ptr2).marks3));

    // int sum1 = (*ptr1).roll_number + (*ptr1).marks1 + (*ptr1).marks2 + (*ptr1).marks3; 
    // int sum2 = (*ptr2).roll_number + (*ptr2).marks1 + (*ptr2).marks2 + (*ptr2).marks3; 

    printf("Enter the details of student 1 :- \n");

    printf("Roll number: ");
    scanf("%d", &(ptr1 -> roll_number));

    printf("Marks1: ");
    scanf("%lf", &(ptr1 ->marks1));

    printf("Marks2: ");
    scanf("%lf", &(ptr1 ->marks2));

    printf("Marks3: ");
    scanf("%lf", &(ptr1 ->marks3));

    printf("\n");

    printf("Enter the details of student 2 :- \n");

    printf("Roll number: ");
    scanf("%d", &(ptr2 -> roll_number));

    printf("Marks1: ");
    scanf("%lf", &(ptr2 ->marks1));

    printf("Marks2: ");
    scanf("%lf", &(ptr2 ->marks2));

    printf("Marks3: ");
    scanf("%lf", &(ptr2 ->marks3));


    int sum1 = (ptr1->roll_number) + (ptr1->marks1) + (ptr1->marks2) + (ptr1->marks3); 
    int sum2 = (ptr2->roll_number) + (ptr2->marks1) + (ptr2->marks2) + (ptr2->marks3); 

    if (sum1 > sum2)
    {
        printf("\nStudent 1 scored more than student 2\n");
    }

    else
    {
        printf("\nStudent 2 scored more than student 1\n");
    }

    free((void*) ptr1);
    free((void*) ptr2);

    return 0;
}

/*

Enter the details of student 1 :-
Roll Number: 100
Marks1: 80.5
Marks2: 75.0
Marks3: 78.5

Enter the details of student 2 :-
Roll Number: 101
Marks1: 81.0
Marks2: 76.0
Marks3: 79.5

Student 2 scored more than Student 1

*/