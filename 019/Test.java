import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char character;
        System.out.print("Enter a lowercase letter: ");
        character = sc.next().charAt(0);

        if ((character == 'a') || (character == 'e') || (character == 'i') || 
           (character == 'o') || (character == 'u'))
        {
            System.out.println(character + " is a vowel");
        }

        else 
        {
            System.out.println(character + " is a consonant");
        }
    }
}
/*

1)
Enter a lowercase letter: a
a is a vowel

2)
Enter a lowercase letter: b
b is a consonant

*/