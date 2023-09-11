import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n, m;
        System.out.print("Enter lower and upper limits: ");
        n = sc.nextInt();
        m = sc.nextInt();

        System.out.print("Prime numbers - ");

        while (n <= m)
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

            //if (n_is_prime == true)
            if (n_is_prime)
            {
                System.out.print(n + " ");
            }

            ++n;
        }

        System.out.println();
    }
}
/*

Enter lower and upper limits: 5 20
Prime numbers - 7 11 13 17 19

*/