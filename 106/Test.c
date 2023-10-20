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
    int n;
    printf("Enter the number of students :- ");
    scanf("%d", &n);

    Student* s = (Student*) malloc(n * sizeof (Student));

    for (int i = 0; i < n; ++i)
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

    double max_sum = 0.0;
    int topper = 0;

    for (int i = 0; i < n; ++i)
    {
        int sum = (s[i].marks1) + (s[i].marks2) + (s[i].marks3);

        if (sum > max_sum)
        {
            max_sum = sum;
            topper = i;
        }
    }

    printf("\nStudent %d has got highest marks ", topper + 1);

    free((void*) s);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

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
//     int n;
//     printf("Enter the number of students :- ");
//     scanf("%d", &n);

//     Student* s = (Student*) malloc(n * sizeof (Student));

//     for (int i = 0; i < n; ++i)
//     {
//         printf("\nEnter the detail of student %d\n", i + 1);

//         printf("Roll Number: ");
//         scanf("%d", &((*(s + i)).roll_number));

//         printf("Marks1: ");
//         scanf("%lf", &((*(s + i)).marks1));

//         printf("Marks2: ");
//         scanf("%lf", &((*(s + i)).marks2));

//         printf("Marks3: ");
//         scanf("%lf", &((*(s + i)).marks3));

//     }

//     double max_sum = 0.0;
//     int topper = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         int sum = (s[i].marks1) + (s[i].marks2) + (s[i].marks3);

//         if (sum > max_sum)
//         {
//             max_sum = sum;
//             topper = i;
//         }
//     }

//     printf("\nStudent %d has got highest marks \n", topper + 1);

//     free((void*) s);

//     return 0;

// }     