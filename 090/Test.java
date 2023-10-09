import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter two integers: ");

        Integer ref1;
        ref1 = sc.nextInt();

        Integer ref2;
        ref2 = sc.nextInt();

        System.out.println(ref1 + " + " + ref2 + " = " + (ref1 + ref2));
    }
}

