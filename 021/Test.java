import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b, c;
        System.out.print("Enter the side lengths: ");
        a = sc.nextInt();
        b = sc.nextInt(); 
        c = sc.nextInt();

        if ((a + b <= c) || (b + c <= a) || (c + a <= b))
        {
            System.out.println("It is an invalid triangle");
        }

        else if ((a == b) && (b == c))
        {
            System.out.println("It is an equilateral trainagle");
        }

        else if ((a != b) && (b != c) && (c != a))
        {
            System.out.println("It is a scalene triangle");
        }

        else 
        {
            System.out.println("It is an isosceles triangle");
        }
    }
}
/*

1)
Enter the side lengths: 4 10 7
It is a scalene triangle

2)
Enter the side lengths: 4 6 4
It is an isosceles triangle

3)
Enter the side lengths: 5 5 5
It is an equilateral triangle

4)
Enter the side lengths: 4 10 6
It is an invalid triangle

 */