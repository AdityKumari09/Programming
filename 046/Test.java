import java.util.Scanner;

class Test
{
    public static void main(String[] agrs)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.print("Factors = ");

        if (n == 1)
        {
            System.out.println(n);
        }

        // else 
        // {
        //     int i = 1;
        //     int second_last_divisor = 1;

        //     while (i < n)
        //     {
        //         if (n % i == 0)
        //         {
        //             second_last_divisor = i;
        //         }

        //         ++i;
        //     }

        //     int m = 1;

        //     while (m < second_last_divisor)
        //     {
        //         if (n % m == 0)
        //         {
        //             System.out.print(m + ", ");
        //         }
        //         ++m;

        //     }    

        // System.out.println(second_last_divisor + " and " + n);
        // }

        else
        {
            int m = 2;
            System.out.print(1);

            while (m < n)
            {

                if (n % m == 0)
                {
                    System.out.print(", " + m);
                }
                ++m;
            }

        System.out.println(" and " + n);
        }
    }    
}

/*

1)
Enter a positive integer: 1
Factors = 1

2)
Enter a positive integer: 10
Factors = 1, 2, 5 and 10

3)
Enter a positive integer: 13
Factors = 1 and 13

*/