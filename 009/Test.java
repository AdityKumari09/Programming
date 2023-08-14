import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if ((n % 5 == 0) && (n % 11 == 0))
        {
            System.out.println(n + " is divisible by 5 and 11");
        }

        else if (n % 5 == 0)
        {
            System.out.println(n + " is divisible by 5");
        }

        else if (n % 11 == 0)
        {
            System.out.println(n + " is divisible by 11");
        }

        else 
        {
            System.out.println(n + " is neither divisble by 5 nor by 11");
        }
    }
}
/*

1)
Enter a positive integer: 10
10 is divisible by 5

2)
Enter a positive integer: 22
22 is divisible by 11

3)
Enter a positive integer: 55
55 is divisible by both 5 and 11

4)
Enter a positive integer: 6
6 is neither divisible by 5 nor by 11

*/