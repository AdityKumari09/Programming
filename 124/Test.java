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

        System.out.println("Maximum integer of array :" + max_arr(arr, n, 0));

    }

    static int max_arr(int[] ref, int size, int i)
    {
        if (i == size - 1)
        {
            return ref[i];
        }

        else
        {

            int temp = max_arr(ref, size, i + 1);

            return ((ref[i] >= temp) ? ref[i] : temp);

            // if (ref[i] >= temp)
            // {
            //     return ref[i];
            // }
    
            // else
            // {
            //     return temp;
            // }
        }
    }
}    