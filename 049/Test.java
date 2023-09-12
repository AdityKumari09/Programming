import java.util.Scanner;
import java.lang.Math;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive inetegr: ");
        n = sc.nextInt();

        if (n == 1)
        {
            System.out.println("1 is an armstrong number");
        }

        else
        {
            int temp1 = n;
            int temp2 = n;
            int no_of_digits = 0;

            while (n > 0)
            {
                ++no_of_digits;
                n = n / 10;
            }

            int sum = 0;

            while (temp1 > 0)
            {
                int ld = temp1 % 10;
                sum = sum + (int) Math.pow((double) ld, (double) no_of_digits);
                temp1 = temp1 / 10;
            }

            if (sum == temp2)
            {
                System.out.println(temp2 + " is an armstrong number");
            }

            else
            {
                System.out.println(temp2 + " is not an armstrong number");
            }
        }
    }
}
/*

1)
Enter a positive integer: 1
1 is an armstrong number

2)
Enter a positive integer: 10
10 is not an armstrong number

3)
Enter a positive integer: 153
153 is an armstrong number

*/