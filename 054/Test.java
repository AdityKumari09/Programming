import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();
        System.out.println();

        for (int i = 1; i <= r; ++i)
        {
            for (int j = 1; j <= r; ++j)
            {
                if (i + j > r)
                {
                    System.out.print("* ");
                }

                else
                {
                    System.out.print("  ");
                }
            }

            System.out.println();
        }
    }
}
/*
  Enter the number of rows: 5

        *
      * *
    * * *
  * * * *
* * * * *

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

*/