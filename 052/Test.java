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

        int first_prime = -1;

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

            if (n_is_prime)
            {
                first_prime = n;
                break;
            }

            else
            {
                ++n;
            }
        }

        if (first_prime == -1)
        {
            System.out.println("There are no prime numbers in the given range");
        }

        else
        {
            System.out.print(first_prime);
            n = first_prime + 1;
            int sum = first_prime;

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

                if (n_is_prime)
                {
                    System.out.print(" + " + n);
                    sum = sum + n;
                }

                ++n; 
            }

            System.out.println(" = " + sum);
        }  
    }
}
/*
 1) 
 Enter lower and upper limits: 5 20 
 5 + 7 + 11 + 13 + 17 + 19 = 72 
  
 2) 
 Enter lower and upper limits: 7 10 
 7 = 7 
  
 3) 
 Enter lower and upper limits: 24 28 
 There are no prime numbers is the given range

*/
