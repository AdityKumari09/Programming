import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
    
        int n;
        System.out.print("Enter a non-negative integer: ");
        n = sc.nextInt();

        if (is_palindrome(n))
        {
            System.out.println(n + " is a palindrome");
        }

        else
        {
            System.out.println(n + " is not a palindrome");
        }
    }

    static boolean is_palindrome(int n)
    {
        int m = n;
        int rev = 0;

        while (n > 0)
        {
            rev = (rev * 10) + n % 10;
            n = n / 10;
        }

        return m == rev;
    }
}
/*

1)
Enter a non-negative integer: 1234
1234 is not a palindrome

2)
Enter a non-negative integer: 1000
1000 is not a palindrome

3)
Enter a non-negative integer: 12321
12321 is a palindrome

*/