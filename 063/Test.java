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
            for (int j = i; j <= r * r; j = j + r)
            {
                if (j < 10)
                {
                    System.out.print("0" + j + " ");
                }

                else
                {
                    System.out.print(j + " ");
                }
            }

            System.out.println();
        }
    }
}
/*
Enter the number of rows: 5

01 06 11 16 21
02 07 12 17 22
03 08 13 18 23
04 09 14 19 24
05 10 15 20 25

*/