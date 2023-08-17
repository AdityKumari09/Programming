#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter the first character: ");
    scanf("%c", &a);

    char b;
    printf("Enter the second character: ");
    scanf("%c", &b);
    scanf("%c", &b);

    char c;
    printf("Enter the third character: ");
    scanf("%c", &c);
    scanf("%c", &c);

    printf("Your characters are %c, %c and %c\n", a, b, c);

    return 0;
}

/*

Enter the first character: a
Enter the second character: b
Enter the third character: c

Your characters are a, b and c

*/