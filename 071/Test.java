import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a posititve integer: ");
        n = sc.nextInt();

        System.out.println(n + " has " + number_of_digits(n) + " digits");
    }

    static int number_of_digits(int n)
    {
        int count = 0;

        while (n > 0)
        {
            n = n / 10;
            ++count;
        }

        return count;
    }
}
/*

Enter a positive integer: 1024
1024 has 4 digits

 */