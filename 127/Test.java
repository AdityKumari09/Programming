import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of elements : ");
        n = sc.nextInt();

        int[] arr = new int [n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        int target;
        System.out.print("Enter element to be searched : ");
        target = sc.nextInt();

        System.out.println(find_index(arr, n, 0, target));
    }

    static int find_index(int[] ref, int n, int i, int target)
    {
        if (i == n)
        {
            return -1;
        }

        else if (ref[i] == target)
        {
            return i;
        }

        else
        {
            return find_index(ref, n, i + 1, target);
        }
    }
}        