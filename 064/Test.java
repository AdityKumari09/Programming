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
            for (int j = i, count = 0; count < i; j = j + r - (count + 1), ++count)
            {
                System.out.printf("%02d ", j);
            }

            System.out.println();
        }
    }
}
/*
Enter the number of rows: 5

01
02 06
03 07 10
04 08 11 13
05 09 12 14 15

*/