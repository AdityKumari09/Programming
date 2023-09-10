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

        while (ll < ul)
        {
            System.out.print(ll + ", ");
            ll++;
        }

        System.out.println(ll);
    }
}


/*

1)
Enter lower and upper limits: 5 5
5

2)
Enter lower and upper limits: 5 6
5, 6

3)
Enter lower and upper limits: 5 10
5, 6, 7, 8, 9, 10

4)
Enter lower and upper limits: 7 9
7, 8, 9

*/