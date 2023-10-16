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
    Student s[5];

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter the detail of student %d\n", i);

        printf("Roll Number: ");
        scanf("%d", &(s.roll_number[i]))
    }
}