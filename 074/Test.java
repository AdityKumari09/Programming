import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (n == 1)
        {
            System.out.println("1 is neither prime nor composite");
        }

        else if (is_prime(n))
        {
            System.out.println(n + " is prime");
        }

        else
        {
            System.out.println(n + " is composite");
        }
    }

    static boolean is_prime(int n)
    {
        int i = 2;
        boolean n_is_prime = true;

        while (i * i <= n)
        {
            if (n % i == 0)
            {
                n_is_prime = false;
                break;
            }

            ++i;
        }

        return n_is_prime;
    }
}
/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/