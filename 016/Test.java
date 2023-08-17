import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a;
        char b;
        System.out.print("Enter an integer and a character: ");
        a = sc.nextInt();
        b = sc.next().charAt(0);

        System.out.println("\nYour integer is " + a);
        System.out.println("Your character is " + b);
    }
}
/*

Enter an integer and a character: 10 a

Your integer is 10
Your character is a

*/