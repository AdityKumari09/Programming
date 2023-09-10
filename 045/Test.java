import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int p = 1;
        System.out.print(n + "! = ");

        if (n > 1)
        {
            while (n > 1)
            {
                System.out.print(n + " x ");
                p = p * n;
                --n;
            }
            
            System.out.println(n + " = " + p);
        }

        else
        {
            System.out.println(n);
        }
    }
}
/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 5 x 4 x 3 x 2 x 1 = 120

*/