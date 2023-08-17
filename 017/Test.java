import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a;
        System.out.print("Enter an integer: ");
        a = sc.nextInt();
        System.out.println("Your integer is " + a);

        char b;
        System.out.print("\nEnter a character: ");
        b = sc.next().charAt(0);
        System.out.println("Your character is " + b);

        System.out.print("\nEnter a character: ");
        b = sc.next().charAt(0);
        System.out.println("Your character is " + b);

        System.out.print("\nEnter an integer: ");
        a = sc.nextInt();
        System.out.println("Your integer is " + a);

    }
}
/*

Enter an integer: 10
Your integer is 10

Enter a character: a
Your character is a

Enter a character: b
Your character is b

Enter an integer: 20
Your integer is 20

*/