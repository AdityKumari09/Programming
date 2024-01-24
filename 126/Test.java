import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b;
        System.out.print("Enter the value of a and b: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int temp = gcd(a , b);

        System.out.println("GCD = " + temp);

        System.out.println("LCM = " + (a * b) / temp);

    }

    static int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }

        else
        {
            return gcd(b , a % b);
        }
    }
}