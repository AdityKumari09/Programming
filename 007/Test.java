import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("* * * * * * * * * * * * * *");
        System.out.println("* Choice   Operation      *");
        System.out.println("*                         *");
        System.out.println("* 1        Addition       *");
        System.out.println("* 2        Subtraction    *");
        System.out.println("* 3        Multiplication *");
        System.out.println("* * * * * * * * * * * * * *\n");

        int n, m;
        System.out.print("Enter 2 integers: ");
        n = sc.nextInt();
        m = sc.nextInt();

        int l;
        System.out.print("Enter your choice: ");
        l = sc.nextInt();
        System.out.print("\n");

        if (l == 1)
        {
            System.out.println(n + " + " + m + " = " + (n + m));
        }

        else if (l == 2)
        {
            System.out.println(n + " - " + m + " = " + (n - m));
        }

        else 
        {
            System.out.println(n + " * " + m + " = " + (n * m));
        }    
    }
}

/*

* * * * * * * * * * * * * *
* Choice   Operation      *
*                         *
* 1        Addition       *
* 2        Subtraction    *
* 3        Multiplication *
* * * * * * * * * * * * * *

Enter 2 integers: 10 5
Enter your choice: 2

10 - 5 = 5

*/