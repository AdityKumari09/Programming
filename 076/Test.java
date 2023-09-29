import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
    
        int n, m;
        System.out.print("Enter lower and upper limits: ");
        n = sc.nextInt();
        m = sc.nextInt();
        System.out.println();

        while (n <= m)
        {
            if ((is_prime(n)) && (is_armstrong(n)))
            {
                System.out.println(n + " is prime as well as armstrong");
            }    
                
            else if (is_prime(n))
            {
                System.out.println(n + " is only prime");
            }    
                
            else if (is_armstrong(n))
            {
                System.out.println(n + " is only armstrong");
            }    
                
            else
            {
                System.out.println(n + " is neither prime nor composite");
            }    
                
            ++n;
        }        
    }
    
    static boolean is_prime(int i)
    {
        if (i == 1)
        {
            return false;
        }

        else
        {    
            int j = 1;
            int number_of_factors = 0;

            while (j <= i)
            {
                if (i % j == 0)
                {
                    ++number_of_factors;
                }

                ++j;
            }

            return number_of_factors == 2;
        }    
    }

    static boolean is_armstrong(int i)
    {
        int temp1 = i;
        int temp2 = i;
        int no_of_digits = 0;

        while (i > 0)
        {
            ++no_of_digits;
            i = i / 10;
        }

        int sum = 0;
        while (temp1 > 0)
        {
            int ld = temp1 % 10;
            sum = sum + (int) Math.pow((double) ld, (double) no_of_digits);
            temp1 = temp1 / 10;
        }

        return sum == temp2;
    }
}    
/*

Enter lower and upper limits: 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/