import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ul, ll;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        if (ll == ul)
        {
            System.out.println(ul + " ");
        }

        else 
        {
            while (ul > ll + 1)
            {
                System.out.print(ul + ", ");
                ul--;
            }

            System.out.println((ll + 1) + " and " + ll);
        }
    }
}

/*

1)
Enter lower and upper limits: 5 5
5

2)
Enter lower and upper limits: 5 6
6 and 5

3)
Enter lower and upper limits: 5 10
10, 9, 8, 7, 6 and 5

4)
Enter lower and upper limits: 7 9
9, 8 and 7

*/