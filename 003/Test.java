import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n, m;
        System.out.print("Enter 2 integer: "); 
        n = sc.nextInt();
        m = sc.nextInt();

        System.out.println(n + " + " + m + " = " + (n + m));
        System.out.println(n + " - " + m + " = " + (n - m));
        System.out.println(n + " * " + m + " = " + (n * m));       
    }
}
/*

Enter 2 integers: 5 10
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50

*/