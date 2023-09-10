import java.util.Scanner;
import java.lang.Math;

// Math.sqrt()

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double a, b, c;
        System.out.print("a x^2 + b x + c = 0\n");
        System.out.print("\nEnter the values of a, b and c: ");
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        double d = (b * b) - (4 * a * c);
        
        if (d >= 0)
        {
            System.out.print("The roots are " + ((-b + Math.sqrt(d)) / (2 * a)));
            System.out.println(" and " + ((-b - Math.sqrt(d)) / (2 * a)));
        }

        else 
        {
            System.out.println("The roots are imaginary");
        }
    }
}
/*

1)
a x^2 + b x + c = 0

Enter the values of a, b and c: 1 -2 1
The roots are 1.000000 and 1.000000

2)
a x^2 + b x + c = 0

Enter the values of a, b and c: 3 2 1
The roots are imaginary

*/