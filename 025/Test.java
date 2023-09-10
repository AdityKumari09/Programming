import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        double a, b, c, d, e;
        System.out.print("Enter marks in 5 subjects: ");
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        d = sc.nextDouble();
        e = sc.nextDouble();

        double avg = (a + b + c + d + e) / 5;

        if (avg < 50.0)
        {
            System.out.println("The grade is F");
        }

        else if (avg < 60.0)
        {
            System.out.println("The grade is E");
        }

        else if (avg < 70.0)
        {
            System.out.println("The grade is D");
        }

        else if (avg < 80.0)
        {
            System.out.println("The grade is C");
        }

        else if (avg < 90.0)
        {
            System.out.println("The grade is B");
        }

        else
        {
            System.out.println("The grade is A");
        }
    }
}
/*

Enter marks in 5 subjects: 72.5 80 91 76 93.5
The grade is B

*/

/*

If average marks >= 90.0, then A
                 >= 80.0, then B
                 >= 70.0, then C
                 >= 60.0, then D
                 >= 50.0, then E
                 Else, F

*/
// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);

//         double a, b, c, d, e;
//         System.out.print("Enter marks in 5 subjects: ");
//         a = sc.nextDouble();
//         b = sc.nextDouble();
//         c = sc.nextDouble();
//         d = sc.nextDouble();
//         e = sc.nextDouble();

//         double avg = (a + b + c + d + e) / 5;

//         if (avg >= 90)
//         {
//             System.out.println("The grade is A");
//         }

//         else if (avg >= 80)
//         {
//             System.out.println("The grade is B");
//         }

//         else if (avg >= 70)
//         {
//             System.out.println("The grade is C");
//         }

//         else if (avg >= 60)
//         {
//             System.out.println("The grade is D");
//         }

//         else if (avg >= 50)
//         {
//             System.out.println("The grade is E");
//         }

//         else 
//         {
//             System.out.println("The grade is F");
//         }
//     }
// }

