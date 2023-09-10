import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n, m;
        System.out.print("Enter 2 positive integers: ");
        n = sc.nextInt();
        m = sc.nextInt();

        int multiplier = 1;

        if (m > n)
        {
            while ((m * multiplier) % n != 0)
            {
                ++multiplier;
            }

            System.out.println("LCM = " + (m * multiplier));
        }

        else if (n > m)
        {
            while ((n * multiplier) % m != 0)
            {
                ++multiplier;
            }

            System.out.println("LCM = " + (n * multiplier));
        }

        else
        {
            System.out.println("LCM = " + n);
        }

    }
}
/*

1)
Enter 2 positive integers: 1 5
LCM = 5

2)
Enter 2 positive integers: 7 8
LCM = 56

*/

