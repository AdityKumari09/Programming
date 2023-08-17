import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char character;
        System.out.print("Enter a character: ");
        character = sc.next().charAt(0);

        if (character >= 'a' && character <= 'z')
        {
            System.out.println(character + " is a lowercase letter");
        }

        else if (character >= 'A' && character <= 'Z')
        {
            System.out.println(character + " is an uppercase letter");
        }

        else if (character >= '0' && character <= '9')
        {
            System.out.println(character + " is a digit");
        }

        else
        {
            System.out.println(character + " ia a special character");
        }
    }
}
/*

1)
Enter a character: a
a is a lowercase letter

2)
Enter a character: A
A is an uppercase letter

3)
Enter a character: 0
0 is a digit

4)
Enter a character: .
. is a special character

*/
