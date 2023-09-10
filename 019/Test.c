#include <stdio.h>

int main(void)
{
    char character;
    printf("Enter a lowecase letter: ");
    scanf("%c", &character);

    if ((character == 'a') || (character == 'e') || (character == 'i') || 
       (character == 'o') || (character == 'u'))
    {  
        printf("%c is a vowel\n", character);
    }

    else 
    {
        printf("%c is a consonant\n", character);
    }   

    return 0;
}
/*

1)
Enter a lowercase letter: a
a is a vowel

2)
Enter a lowercase letter: b
b is a consonant

*/