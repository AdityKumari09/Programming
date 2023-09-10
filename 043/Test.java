import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a non-negative integer: ");
        n = sc.nextInt();

        int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0,
        c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;

        while (n > 0)
        {
            switch (n % 10)
            {
                case 0:
                    ++c0;
                    break;
                case 1:
                    ++c1;
                    break;    
                case 2:
                    ++c2;
                    break;
                case 3:
                    ++c3;
                    break;
                case 4:
                    ++c4;
                    break;
                case 5:
                    ++c5;
                    break;
                case 6:
                    ++c6;
                    break;
                case 7:
                    ++c7;
                    break;
                case 8:
                    ++c8;
                    break;
                default:
                    ++c9;
            }

            n = n / 10;
        }
        System.out.println("| 0 |" + c0 + " |");
        System.out.println("| 1 |" + c1 + " |");
        System.out.println("| 2 |" + c2 + " |");
        System.out.println("| 3 |" + c3 + " |");
        System.out.println("| 4 |" + c4 + " |");
        System.out.println("| 5 |" + c5 + " |");
        System.out.println("| 6 |" + c6 + " |");
        System.out.println("| 7 |" + c7 + " |");
        System.out.println("| 8 |" + c8 + " |");
        System.out.println("| 9 |" + c9 + " |");
    }
}
/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |

Note: Solve this problem using if-else in one language and using switch in the
      other language.

*/
