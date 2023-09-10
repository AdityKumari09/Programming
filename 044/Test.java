import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double base;
        System.out.print("Enter the base: ");
        base = sc.nextDouble();

        int exponent;
        System.out.print("Enter the integral exponent: ");
        exponent = sc.nextInt();

        double p = 1.0;
        System.out.println();

        if ((base == 0.0) && (exponent > 0))
        {
            System.out.println("\n 0 " + " ^ " + exponent + " = " + " 0 ");
        }

        else if (exponent > 0)
        {
            System.out.print(base + " ^ " + exponent);
            
            while (exponent > 0)
            {
                p = p * base;
                --exponent;
            }

            System.out.println(" = " + p);
        }

        else if ((base == 0.0) && (exponent == 0))
        {
            System.out.println(" 0 " + " ^ " + " 0 " + " is undefined");
        }

        else if (exponent == 0)
        {
            System.out.println(base + " ^ " + " 0 " + " = " + " 1 ");
        }

        else if ((base == 0.0) && (exponent < 0))
        {
            System.out.println("Dividing by 0 is ubdefined");
        }

        else 
        {
            System.out.print(base + " ^ " + exponent);

            while (exponent < 0)
            {
                p = p * base;
                ++exponent;
            }

            System.out.println(" = " + (1 / p));
        }
    }
}
/*

Note: Try using %g with printf() to print double values.

1)
Enter the base: 1.2
Enter the integral exponent: 3

1.2 ^ 3 = 1.728

2)
Enter the base: -2.5
Enter the integral exponent: -2

-2.5 ^ -2 = 0.16

3)
Enter the base: 7
Enter the integral exponent: 0

7 ^ 0 = 1

4)
Enter the base: 0
Enter the integral exponent: 4

0 ^ 4 = 0

5)
Enter the base: 0
Enter the integral exponent: 0

0 ^ 0 is undefined

6)
Enter the base: 0
Enter the integral exponent: -3

Dividing by 0 is undefined

*/