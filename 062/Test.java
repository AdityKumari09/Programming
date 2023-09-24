import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd) (>= 5): ");
        r = sc.nextInt();
        System.out.println();

        for (int i = 1; i <= r; ++i)
        {
            for (int j = 1; j <= r; ++j)
            {
                if ((i == 1) || (i == r) || (j == 1)
                    || (j == r) || (i == j) || (i + j == r + 1))
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
Enter the number of rows (odd) (>= 5): 9

* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *

*/