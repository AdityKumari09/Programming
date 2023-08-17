#include <stdio.h>

int main(void)
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z')
    {
        printf("%c is a lowecase letter\n", character);
    }  

    else if (character >= 'A' && character <= 'Z')
    {
        printf("%c is an uppercase letter\n", character);
    }  

    else if (character >= '0' && character <= '9')
    {
        printf("%c is a digit\n", character);
    }

    else
    {
        printf("%c is a special character\n", character);
    }
    
    return 0;
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
