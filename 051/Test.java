import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of terms: ");
        n = sc.nextInt();

        int a = 0;
        int b = 1;

         while (n > 0)
        {
            System.out.print(a + " ");
            int sum = a + b;
            a = b;
            b = sum;
            --n;
        }

        System.out.println();
    }
}
/*

1)
Enter the number of terms: 1
0

2)
Enter the number of terms: 2
0 1

3)
Enter the number of terms: 3
0 1 1

4)
Enter the number of terms: 6
0 1 1 2 3 5

*/