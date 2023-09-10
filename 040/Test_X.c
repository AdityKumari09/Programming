// #include <stdio.h>

// int main(void)
// {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     int m = n;

//     int count = 0;

//     while (n > 0)
//     {
//         n = n / 10;
//         ++count;
//     }

//     int div = 1;

//     while (count > 1)
//     {
//         div = div * 10;
//         --count;
//     }

//     int sum = 0;

//     while (m > 9)
//     {
//         int first_digit = m / div;
//         printf("%d + ", first_digit);
//         sum = sum + first_digit;
//         m = m % div;
//         div = div / 10;
//     }

//     printf("%d = %d\n", m, sum + m);
// }
/*

Enter a positive integer: 1024
1 + 0 + 2 + 4 = 7

Note: Don't reverse the integer.

 */

 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
    int n; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int number_of_digits = (int) log10((double) n) + 1;
    int div = (int) pow(10.0, (double) (number_of_digits - 1));

    int sum = 0;

    while (n > 9)
    {
      int first_digit = n / div;
      printf("%d + ", first_digit);
      sum = sum + first_digit;
      n = n % div;
      div = div / 10;
    }

    printf("%d = %d\n", n, sum);

    return 0;
 }