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
        printf("\nEnter the detail of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &((s[i]).roll_number));

        printf("Marks1: ");
        scanf("%lf", &((s[i]).marks1));

        printf("Marks2: ");
        scanf("%lf", &((s[i]).marks2));

        printf("Marks3: ");
        scanf("%lf", &((s[i]).marks3));

    }

    for (int i = 0; i < 5; ++i)
    {
        printf("\nRoll Number: %d\n", ((s[i].roll_number)));
        printf("Marks1: %0.1lf\n", ((s[i].marks1)));
        printf("Marks1: %0.1lf\n", ((s[i].marks2)));
        printf("Marks1: %0.1lf\n", ((s[i].marks3)));

    }

    return 0;
}


// #include <stdio.h>

// struct student
// {
//     int roll_number;
//     double marks1;
//     double marks2;
//     double marks3;
// };

// typedef struct student Student;

// int main(void)
// {
//     Student s[5];

//     for (int i = 0; i < 5; ++i)
//     {
        // printf("\nEnter the detail of student %d\n", i + 1);

        // printf("Roll Number: ");
        // scanf("%d", &((*(s + i)).roll_number));

        // printf("Marks1: ");
        // scanf("%lf", &((*(s + i)).marks1));

        // printf("Marks2: ");
        // scanf("%lf", &((*(s + i)).marks2));

        // printf("Marks3: ");
        // scanf("%lf", &((*(s + i)).marks3));

//     }

//     for (int i = 0; i < 5; ++i)
//     {
        // printf("\nRoll Number: %d\n", (*(s + i)).roll_number);
        // printf("Marks1: %g\n", (*(s + i)).marks1);
        // printf("Marks1: %g\n", (*(s + i)).marks2);
        // printf("Marks1: %g\n", (*(s + i)).marks3);

//     }
    
//     return 0;
// }

// (*(s + i)).roll_number
// &((*(s + i)).roll_number)