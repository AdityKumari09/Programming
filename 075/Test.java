import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();
        System.out.print("Prime factors - ");

        int i = 1;

        while (i <= n)
        {
            if ((n % i == 0) && (is_prime(i))) // short circuit/lazy evaluation
            // firstly we are checking whether i is factor of n bcz it is easy 
            // to find then we are checking whether it is prime or not so if not
            // factor we will not check whether prime or not.
            {
                System.out.print(i + " ");
            }

            ++i;
        }

    }

    static boolean is_prime(int i)
    {
        //System.out.println("\n\n\nChecking for i = " + i);

        if (i == 1)
        {
            return false;
        }

        else
        {
            int j = 2;
            boolean i_is_prime = true;

            while (j * j <= i)
            {
                if (i % j == 0)
                {
                    i_is_prime = false;
                    break;
                }

                ++j;
            }
        
            return i_is_prime;
        }
    }
}        
/*
  1)
  Enter a positive integer (>= 2): 15
  Prime factors - 3 5

  3)
  Enter a positive integer (>= 2): 48
  Prime factors - 2 3

*/