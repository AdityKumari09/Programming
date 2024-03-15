import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a non - negative integer: ");
        n = sc.nextInt();

        System.out.println("Factorial = " + fact(n));
    }

    static int fact(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        else
        {
            return n * fact(n - 1);
        }

    }

}    