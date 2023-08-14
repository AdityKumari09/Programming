import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char a;
        System.out.print("Enter a character: ");
        a = sc.next().charAt(0);

        System.out.println("Your character is " + a);
    }
}
/*
Enter a character: a
Your character is a
*/
