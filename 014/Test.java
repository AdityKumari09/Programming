// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);
//         char a, b, c, d, e;
//         System.out.print("Enter 5 characters: ");
//         a = sc.next().charAt(0);
//         b = sc.next().charAt(0);
//         c = sc.next().charAt(0);
//         d = sc.next().charAt(0);
//         e = sc.next().charAt(0);

//         System.out.println("your characters are " + a + ", " + b + ", "  + c + ", " + d  + " and " + e);
//     }
// }
/*

Enter 5 characters: a b c d e
Your characters are a, b, c, d and e

*/

import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        char a;
        System.out.print("Enter 5 characters: ");
        a = sc.next().charAt(0);
    
        System.out.print("Your characters are " + a  + ", ");
    
        a = sc.next().charAt(0);
        System.out.print(a + ", ");
    
        a = sc.next().charAt(0);
        System.out.print(a + ", ");
    
        a = sc.next().charAt(0);
        System.out.print(a);
    
        a = sc.next().charAt(0);
        System.out.println(" and " + a);
    }
}