#include <stdio.h>

int main(void)
{
    double a, b, c, d, e;
    printf("Enter marks in 5 subjects: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);

    double avg = (a + b + c + d + e) / 5;
    
    if (avg < 50.0)
    {
        printf("The grade is F\n");
    }

    else if (avg < 60.0)
    {
        printf("The grade is E\n");
    }

    else if (avg < 70.0)
    {
        printf("The grade is D\n");
    }

    else if (avg < 80.0)
    {
        printf("The grade is C\n");
    }

    else if (avg < 90.0)
    {
        printf(" The grade is B\n");
    }

    else 
    {
        printf("The grade is A\n");
    }

    return 0;
}
/*

Enter marks in 5 subjects: 72.5 80 91 76 93.5
The grade is B

*/

/*

If average marks >= 90.0, then A
                 >= 80.0, then B
                 >= 70.0, then C
                 >= 60.0, then D
                 >= 50.0, then E
                 Else, F

*/
// #include <stdio.h>

// int main(void)
// {
//     double a, b, c, d, e;
//     printf("Enter marks in 5 subjects: ");
//     scanf("%lf", &a);
//     scanf("%lf", &b);
//     scanf("%lf", &c);
//     scanf("%lf", &d);
//     scanf("%lf", &e);

//     double avg = (a + b + c + d + e) / 5;

//     if (avg >= 90.0)
//     {
//         printf("The grade is A\n");
//     }

//     else if (avg >= 80.0)
//     {
//         printf("The grade is B\n");
//     }

//     else if (avg >= 70.0)
//     {
//         printf("The grade is C\n");
//     }

//     else if (avg >= 60.0)
//     {
//         printf("The grade is D\n");
//     }

//     else if (avg >= 50.0)
//     {
//         printf("The grade is E\n");
//     }

//     else 
//     {
//         printf("The grade is F\n");
//     }
// }

