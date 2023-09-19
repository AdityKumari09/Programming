import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of row (>= 3): ");
        r = sc.nextInt();

        int c;
        System.out.print("Enter the number of columns (>= 3): ");
        c = sc.nextInt();

        System.out.println();

        for (int i = 1; i <= r; ++i)
        {
            for (int j = 1; j <= c + (r - 1); ++j)
            {
                if ((i + j == r + 1) || (i + j == r + c) 
                   || ((i == 1) && (j >= r)) || ((i == r) && (j <= c)))
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
Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 7

      * * * * * * *
    *           *
  *           *
* * * * * * *
*/