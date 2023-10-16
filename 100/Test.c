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
        Student s1;

        printf("Enter the detail of student 1\n");

        printf("Roll Number: ");
        scanf("%d", &(s1.roll_number));

        printf("Marks1: ");
        scanf("%lf", &(s1.marks1));

        printf("Marks2: ");
        scanf("%lf", &(s1.marks2));

        printf("Marks3: ");
        scanf("%lf", &(s1.marks3));

        printf("\n");

        Student s2;

        printf("Enter the detail of student 2\n");

        printf("Roll Number: ");
        scanf("%d", &(s2.roll_number));

        printf("Marks1: ");
        scanf("%lf", &(s2.marks1));

        printf("Marks2: ");
        scanf("%lf", &(s2.marks2));

        printf("Marks3: ");
        scanf("%lf", &(s2.marks3));

        printf("\n");

        int sum1 = (s1.marks1) + (s1.marks2) + (s1.marks3);
        int sum2 = (s2.marks1) + (s2.marks2) + (s2.marks3); 

        if (sum1 > sum2)
        {
            printf("Student 1 scored more than student 2\n");
        }

        else
        {
            printf("Student 2 scored more than student\n");
        }

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