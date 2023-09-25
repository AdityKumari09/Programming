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
            System.out.println(n + " + " + m + " = " + sum(n, m));
        }

        else if (l == 2)
        {
            System.out.println(n + " - " + m + " = " + difference(n, m));
        }

        else 
        {
            System.out.println(n + " * " + m + " = " + product(n, m));
        }    
        
    }

    static int sum(int n, int m)
    {
        return n + m;
    }

    static int difference(int n, int m)
    {
        return n - m;
    }

    static int product(int n, int m)
    {
        return n * m;
    }
}        
