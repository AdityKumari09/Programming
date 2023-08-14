import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a year: ");
        n = sc.nextInt();

        if ((n % 4 == 0) && (n % 100 != 0))
        {
            System.out.println("It is a leap year");
        }

        else if ((n % 4 == 0) && (n % 100 == 0) && (n % 400 == 0))
        {
            System.out.println("It is a leap year");
        }

        else 
        {
            System.out.println("It is not a leap year");
        }
    }
}
/*

Enter a year: 1000
It is  not a leap year

*/