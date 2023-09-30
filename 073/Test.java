import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println(n + "! = " + factorial(n));
    }

    static int factorial(int n)
    {
        int fact = 1;

        while (n > 0)
        {
            fact = fact * n;
            --n;
        }

        return fact;
    }
}
/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 120

*/