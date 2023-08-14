// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);
//         int n;
//         System.out.print("Enter 5 positive inetegrs: ");
//         n = sc.nextInt();

//         int l = 0;
//         if (n > l)
//         {
//             l = n;
//         }

//         n = sc.nextInt();
//         if (n > l)
//         {
//             l = n;
//         }

//         n = sc.nextInt();
//         if (n > l)
//         {
//             l = n;
//         }

//         n = sc.nextInt();
//         if (n > l)
//         {
//             l = n;
//         }

//         n = sc.nextInt();
//         if (n > l)
//         {
//             l = n;
//         }

//         System.out.println( l + " is laregest");
//     }
// }



/*

Enter 5 positive integers: 3 2 1 2 2
3 is the largest

*/
import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int n, l;
        System.out.print("Enter 5 positive inetegrs: ");

        l = sc.nextInt();
        //////////////////////////////

        n = sc.nextInt();
        
        if (n > l)
        {
            l = n;
        }
       /////////////////////////////

        n = sc.nextInt();

        if (n > l)
        {
            l = n;
        }
       ///////////////////////////

        n = sc.nextInt();

        if (n > l)
        {
            l = n;
        }
       ////////////////////////////

        n = sc.nextInt();

        if (n > l)
        {
            l = n;
        }
       //////////////////////////////////

       System.out.println(l + " is largest");

    }
}
