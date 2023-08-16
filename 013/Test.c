#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter 2 characters: ");
    scanf("%c", &a);

    printf("Your characters are %c", a);
    
    scanf("%c", &a);
    scanf("%c", &a);
    printf(" and %c\n", a);

    return 0;
}

/*

Enter 2 characters: a b
Your characters are a and b

*/