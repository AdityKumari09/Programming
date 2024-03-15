import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the value of n : ");
        n = sc.nextInt();

        System.out.println(Fibonacci(n));

    }

    static int Fibonacci(int n)
    {
        if (n == 1)
        {
            return 0;
        }

        if (n == 2)
        {
            return 1;
        }

        else
        {
            return (Fibonacci(n - 2) + Fibonacci(n - 1));
        }
    }
}