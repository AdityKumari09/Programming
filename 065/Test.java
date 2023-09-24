import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd): ");
        r = sc.nextInt();

        int temp = (r + 1) / 2;

        for (int i = 1; i <= temp; ++i)
        {
            for (int j = 1; j <= temp - i; ++j)
            {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; ++j)
            {
                System.out.print((char) (j + 'A' - 1) + " ");
            }

            for (int j = 1; j < i; ++j)
            {
                System.out.print((char) (i - j + 'A' - 1) + " ");
            }

            System.out.println();
        }
///////////////////////////////////////////////////////////////////////////////        

        for (int i = temp - 1; i >= 1; --i)
        {
            for (int j = 1; j <= temp - i; ++j)
            {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; ++j)
            {
                System.out.print((char) (j + 'A'- 1) + " ");
            }

            for (int j = 1; j < i; ++j)
            {
                System.out.print((char) (i - j + 'A' - 1) + " ");
            }

            System.out.println();
        }
    }
}
/* 
Enter the number of rows (odd): 7

      A
    A B A
  A B C B A
A B C D C B A
  A B C B A
    A B A
      A
*/      