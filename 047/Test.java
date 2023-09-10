import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int n, m;
        System.out.print("Enter 2 positive inetegrs: ");
        n = sc.nextInt();
        m = sc.nextInt();

        int i = 1;
        int hcf = 0;

        System.out.print("HCF = ");

        if (n < m)
        {
            while (i <= n)
            {
                if ((n % i == 0) && (m % i == 0))
                {
                    hcf = i;
                }

                ++i;
            }

            System.out.println(hcf);
        }

        else if (m < n)
        {
            while (i <= n)
            {
                if ((n % i == 0) && (m % i == 0))
                {
                    hcf = i;
                }

                ++i;
            }

            System.out.println(hcf);
        }

        else 
        {
            System.out.println(hcf);
        }
    }    
}
/*

1)
Enter 2 positive integers: 1 5
HCF = 1

2)
Enter 2 positive integers: 7 21
HCF = 7

*/