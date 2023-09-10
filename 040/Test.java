// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);

//         int n;
//         System.out.print("Enter a posititve integer: ");
//         n = sc.nextInt();
//         int m = n;

//         int count = 0;

//         while (n > 0)
//         {
//             n = n / 10;
//             ++count;
//         }
        
//         int div = 1;

//         while (count > 1)
//         {
//             div = div * 10;
//             --count;
//         }
//         // System.out.println(div);

//         int sum = 0;

//         while (m > 9)
//         {
//             int first_digit = m / div;
//             System.out.print(first_digit + " + ");
//             sum = sum + first_digit;
//             m = m % div;
//             div = div / 10;
//         }
        
//         System.out.println(m + " = " + (sum + m));
//     }
// }
/*

Enter a positive integer: 1024
1 + 0 + 2 + 4 = 7

Note: Don't reverse the integer.

 */
import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n; 
        System.out.print("Enter a positive integr: ");
        n = sc.nextInt();

        int number_of_digits = (int) Math.log10((double) n) + 1;
        int div = (int) Math.pow(10.0, (double) (number_of_digits - 1));

        int sum = 0;

        while (n > 9)
        {
            int first_digit = n / div;
            System.out.print(first_digit + " + ");
            sum = sum + first_digit;
            n = n % div;
            div = div / 10;
        }

        System.out.println(n + " = " + sum);
    }
}