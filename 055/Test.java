import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();
        System.out.println();

        for (int i = 1; i <= r; ++i)
        {
            for (int j = 1; j <= (r * 2) - 1; ++j)
            {
                if ((i <= j) && (i + j <= 2 * r))
                {
                    System.out.print("* ");
                }

                else
                {
                    System.out.print("  ");
                }
            }

            System.out.println();
        }

    }    
}
//         int i = 1;

//         while (i <= r)
//         {
//             int j = 1;

//             while (j <= (r * 2) - 1)
//             {
//                 if ((i <= j) && (i + j <= 2 * r))
//                 {
//                     System.out.print("* ");
//                 }

//                 else
//                 {
//                     System.out.print("  ");
//                 }
//                 ++j;
//             }

//             System.out.println();
//             ++i;
//         }
//     }
// }
/*
Enter the number of rows: 5

 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/