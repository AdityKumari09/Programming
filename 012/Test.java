// import java.util.Scanner;

// class Test
// {
//    public static void main(String[] args)
//    {
//     Scanner sc = new Scanner(System.in);

//     char a, b;
//     System.out.print("Enter 2 characters: ");
//     a = sc.next().charAt(0);
//     b = sc.next().charAt(0);
    
//     System.out.println("your characters are " + a + " and "+ b);

//    } 
// }

import java.util.Scanner;

class Test
{
   public static void main(String[] args)
   {
      Scanner sc = new Scanner(System.in);

      char a;
      System.out.print("Enter 2 characters: ");
      a = sc.next().charAt(0);

      System.out.print("your characters are " + a);

      a = sc.next().charAt(0);

      System.out.println(" and " + a);
   }
}
/*

Enter 2 characters: a b
Your characters are a and b

*/