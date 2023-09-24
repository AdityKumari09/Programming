#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);
    printf("\n");

    int temp = (r - 1) / 2;

    int i = -temp;

    while (i <= temp)
    {
        int j = -temp;

        while (j <= temp)
        {
            printf("%d ", abs(i) > abs(j) ? abs(i) : abs(j));
            ++j;
        }

        printf("\n");
        ++i;
    }
}
// #include <stdio.h>

// int main(void)
// {
//     int r;
//     printf("Enter the number of rows (odd): ");
//     scanf("%d", &r);
//     printf("\n");

//     int temp = (r + 1) / 2;

//     int i = 1;

//     while (i <= temp - 1)
//     {
//         int to_print = temp;

//         int j = 1;

//         while (j <= i)
//         {
//             --to_print;
//             printf("%d ", to_print);
//             ++j;
//         }

//         j = 1;

//         while (j <= r - 2 * i)
//         {
//             printf("%d ", to_print);
//             ++j;
//         }

//         j = 1;

//         while (j <= i)
//         {
//             printf("%d ", to_print);
//             ++to_print;
//             ++j;            
//         }

//         printf("\n");
//         ++i;
//     }

//     ////////////////////////////////////////

//     i = temp - 1;

//     while (i >= 0)
//     {
//         printf("%d ", i);
//         --i;
//     }

//     i = 1;

//     while (i <= temp - 1)
//     {
//         printf("%d ", i);
//         ++i;
//     }

//     printf("\n");

//     ////////////////////////////////////

//     i = temp - 1;

//     while (i >= 1)
//     {
//         int to_print = temp;

//         int j = 1;

//         while (j <= i)
//         {
//             --to_print;
//             printf("%d ", to_print);
//             ++j;
//         }

//         j = 1;

//         while (j <= r - 2 * i)
//         {
//             printf("%d ", to_print);
//             ++j;
//         }

//         j = 1;

//         while (j <= i)
//         {
//             printf("%d ", to_print);
//             ++to_print;
//             ++j;            
//         }

//         printf("\n");
//         --i;
//     }

//     return 0;
// }
/*
Enter the number of rows (odd): 7

3 3 3 3 3 3 3 
3 2 2 2 2 2 3 
3 2 1 1 1 2 3 
3 2 1 0 1 2 3
3 2 1 1 1 2 3
3 2 2 2 2 2 3
3 3 3 3 3 3 3

*/