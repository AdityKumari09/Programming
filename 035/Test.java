import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        int sum = 0;

        while (ll < ul)
        {
            sum = sum + ll;
            System.out.print(ll + " + ");
            ++ll;
        }

        System.out.println(ul + " = " + (sum + ul));
    }
}
/*

Enter lower and upper limits: 7 15
7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 = 99

 */