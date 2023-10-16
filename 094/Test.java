import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of integers:- ");
        n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter " + n + " integers :- ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum = sum + arr[i];
        }

        System.out.print("Their sum is " + sum);

        System.out.println();
    }
}
/*
Enter 5 integers 1 2 3 4 5
Their sum is - 15
*/