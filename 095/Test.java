import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of integers :- ");
        n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter " + n + " integers :- ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        int max = arr[0];
        int min = arr[0];

        for (int i = 1; i < n; ++i)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }

            else if (min > arr[i])
            {
                min = arr[i];
            }
        }

        System.out.println(max + " is maximum and " + min + " is minimum");

    }

}

/*
Enter 5 elements 2 3 4 5 6
6 is maximum and 2 is minimum
*/