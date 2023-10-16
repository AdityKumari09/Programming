import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a non-negative integer :- ");
        n = sc.nextInt();

        // int[] number_of_occurence = new int[10];

        // for (int i = 0; i < 10; ++i)
        // {
        //     number_of_occurence[i] = 0;
        // }

        int[] number_of_occurence = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        // java's array are always initialized with 0
        // int[] number_of_occurence = new int[10];  only doing this will also
        // work
        

        while (n > 0)
        {
            ++number_of_occurence[n % 10];
            n = n / 10;
        }

        for (int i = 0; i < 10; ++i)
        {
            System.out.println("| " + i + " |" + number_of_occurence[i] +" |");
        }
    }
}
/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |


*/