import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter size of array : ");
        n = sc.nextInt();

        int[] arr = new int [n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        System.out.print("Before reversing : ");

        for (int i = 0; i < n; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        reverse_array(arr, 0, n - 1);

        System.out.print("After reversing : ");

        for (int i = 0; i < n; ++i)
        {
            System.out.print(arr[i] + " ");
        }

    }

    static void reverse_array(int[] arr, int i, int j)
    {
        if (i < j)
        {
            swap(arr, i, j);

            reverse_array(arr, i + 1, j - 1);
        }
    }

    static void swap(int[] arr, int index1, int index2)
    {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}    