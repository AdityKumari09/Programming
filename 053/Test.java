import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();

        int c;
        System.out.print("Enter the number of columns: ");
        c = sc.nextInt();

        System.out.println();

        for (int i = 1; i <= r; ++i)
        {
            for (int j = 1; j <= c; ++j)
            {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}
/*
Enter the number of rows: 3
Enter the number of columns: 5

* * * * *
* * * * *
* * * * *

*/