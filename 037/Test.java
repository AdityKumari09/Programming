import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an integer: ");
        n = sc.nextInt();
        System.out.println();

        int i = 1;
        
        while (i <= 9)
        {
            System.out.println(n + " x " + i + " = " + (n * i));
            ++i;
        }
    }
}
/*

Enter an integer: 13

13 x 1 = 13
13 x 2 = 26
13 x 3 = 39
...
13 x 9 = 117

 */