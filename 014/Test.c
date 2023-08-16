// #include <stdio.h>

// int main(void)
// {
//     char a, b, c, d, e;
//     printf("Enter 5 characters: ");
//     scanf("%c%c%c%c%c%c%c%c%c", &a, &b, &b, &c, &c, &d, &d, &e, &e);

//     printf("Your characters are %c, %c, %c, %c and %c\n", a, b, c, d, e);

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter 5 characters: ");
    scanf("%c", &a);

    printf("Your characters are %c, ", a);

    scanf("%c", &a);
    scanf("%c", &a);
    printf("%c, ", a);

    scanf("%c", &a);
    scanf("%c", &a);
    printf("%c, ", a);

    scanf("%c", &a);
    scanf("%c", &a);
    printf("%c", a);

    scanf("%c", &a);
    scanf("%c", &a);
    printf(" and %c\n", a);

    return 0;

}

/*

Enter 5 characters: a b c d e
Your characters are a, b, c, d and e

*/