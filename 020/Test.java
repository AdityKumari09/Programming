import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an amount: Rs. ");
        n = sc.nextInt();

        System.out.println("\nThe notes required are :- ");

        System.out.println("2000: " + n / 2000);
        n = n % 2000;

        System.out.println("500: " + n / 500);
        n = n % 500;

        System.out.println("200: " + n / 200);
        n = n % 200;

        System.out.println("100: " + n / 100);
        n = n % 100;

        System.out.println("50: " + n / 50);
        n = n % 50;

        System.out.println("20: " + n / 20);
        n = n % 20;

        System.out.println("10: " + n / 10);
        n = n % 10;

        System.out.println("5: " + n / 5);
        n = n % 5;

        System.out.println("2: " + n / 2);
        n = n % 2;

        System.out.println("1: " + n / 1);
    }
}
/*

Enter an amount: Rs. 5423

The notes required are :-
2000: 2
500: 2
200: 2
100: 0
50: 0
20: 1
10: 0
5: 0
2: 1
1: 1

*/