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

        for (int i = 0; i < arr.length; ++i)
        {
            arr[i] = sc.nextInt();
        }

        int target;
        System.out.print("Enter element to be searched: ");
        target = sc.nextInt();

        int index_of_target = find_index(arr, target);

        if (index_of_target != -1)
        {
            System.out.println(target + " is found at index " + index_of_target);
        }

        else
        {
            System.out.println(target + " is not found");
        }
    }

    static int find_index(int[] arr, int target)
    {
        int index_of_target = -1;

        for (int i = 0; i < arr.length; ++i)
        {
            if (target == arr[i])
            {
                index_of_target = i;
                break;
            }
        }

        return index_of_target;
    }
}
/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found at index 3

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/