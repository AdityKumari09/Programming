// #include <stdio.h>

// int main(void)
// {
//     char a, b;
//     printf("Enter 2 characters: ");
//     scanf("%c%c%c", &a, &b, &b);

//     printf("Your characters are %c and %c\n", a, b);

//     return 0;
// }


#include<stdio.h>

int main(void)
{
    char a;
    printf("Enter two characters: ");
    scanf("%c", &a);

    printf("your characters are %c", a);
    
    scanf("%c%c", &a, &a);
    printf(" and %c\n", a);

    return 0;
}
/*

Enter 2 characters: a b
your characters are a and b

*/