import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char a;
        System.out.print("Enter the first character: ");
        a = sc.next().charAt(0);

        char b;
        System.out.print("Enter the second character: ");
        b = sc.next().charAt(0);

        char c;
        System.out.print("Enter the third character: ");
        c = sc.next().charAt(0);

        System.out.println("Your characters are " + a + ", " + b + " and " + c);
    }
}
/*

Enter the first character: a
Enter the second character: b
Enter the third character: c

Your characters are a, b and c

*/