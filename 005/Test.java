import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n, m;
        System.out.print("Enter two integer: ");
        n = sc.nextInt();
        m = sc.nextInt();
    
        if (n > m)
        {
            System.out.println(n + " is greater");
        }

        else if (n == m)
        {
            System.out.println("They are equal");
        }

        else 
        {
            System.out.println(m + " is greater");
        }
    }
}
/*

1)
Enter 2 integers: 10 5
10 is greater

2)
Enter 2 integers: 5 5
They are equal

*/