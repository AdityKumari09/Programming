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

        int new_ll;

        if (ll % 2 != 0)
        {
            new_ll = ll + 1;
        }

        else 
        {
            new_ll = ll;
        }

        int new_ul;

        if (ul % 2 != 0)
        {
            new_ul = ul - 1;
        }

        else 
        {
            new_ul = ul;
        }

        if (new_ul == new_ll)
        {
            System.out.println(new_ll);
        }

        else 
        {
            while (new_ll < new_ul - 2)
            {
                System.out.print(new_ll + ", ");
                new_ll = new_ll + 2;
            }

            System.out.println((new_ul - 2) + " and " + (new_ul));
        }
    }
}

/*

Enter lower and upper limits: 7 15
8, 10, 12 and 14

*/