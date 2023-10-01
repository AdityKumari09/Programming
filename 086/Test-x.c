/*

An array name gets converted to a pointer to its first element, except for
1. sizeof operator
2. address of (&) operator
3. alignof operator
4. string literal used for initialization (for eg., char a[] = "hello")

For eg.,
a[2] -> *(a + 2) -> *((int*) 100 + 2) -> *(108)

*/

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    int number_of_occurrences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (x > 0)
    {
        ++(number_of_occurrences[x % 10]);
        x = x / 10;
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("| %d | %d |\n", i, number_of_occurrences[i]);
    }

    return 0;
}
// #include <stdio.h>

// int main(void)
// {
//     int x;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &x);

//     int number_of_occurrences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//     while (x > 0)
//     {
//         int ld = x % 10;

//         if (ld == 0)
//         {
//             ++number_of_occurrences[0];
//         }

//         else if (ld == 1)
//         {
//             ++number_of_occurrences[1];
//         }

//         else if (ld == 2)
//         {
//             ++number_of_occurrences[2];
//         }

//         else if (ld == 3)
//         {
//             ++number_of_occurrences[3];
//         }

//         else if (ld == 4)
//         {
//             ++number_of_occurrences[4];
//         }

//         else if (ld == 5)
//         {
//             ++number_of_occurrences[5];
//         }

//         else if (ld == 3)
//         {
//             ++number_of_occurrences[3];
//         }

//         else if (ld == 6)
//         {
//             ++number_of_occurrences[6];
//         }        

//         else if (ld == 7)
//         {
//             ++number_of_occurrences[7];
//         }

//         else if (ld == 8)
//         {
//             ++number_of_occurrences[8];
//         }

//         else if (ld == 9)
//         {
//             ++number_of_occurrences[9];
//         }

//         x = x / 10;
//     }

//     printf("| 0 | %d |\n", number_of_occurrences[0]);
//     printf("| 1 | %d |\n", number_of_occurrences[1]);
//     printf("| 2 | %d |\n", number_of_occurrences[2]);
//     printf("| 3 | %d |\n", number_of_occurrences[3]);
//     printf("| 4 | %d |\n", number_of_occurrences[4]);
//     printf("| 5 | %d |\n", number_of_occurrences[5]);
//     printf("| 6 | %d |\n", number_of_occurrences[6]);
//     printf("| 7 | %d |\n", number_of_occurrences[7]);
//     printf("| 8 | %d |\n", number_of_occurrences[8]);
//     printf("| 9 | %d |\n", number_of_occurrences[9]);

//     return 0;
// }
/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |


*/