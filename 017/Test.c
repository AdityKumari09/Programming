#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Your integer is %d\n", a);

    char b;
    printf("\nEnter a character: ");
    scanf("%c%c", &b, &b);
    printf("Your character is %c\n", b);

    printf("\nEnter a character: ");
    scanf("%c%c", &b, &b);
    printf("Your character is %c\n", b);

    printf("\nEnter an integer: ");
    scanf("%d", &a);
    printf("Your integer is %d\n", a);

    return 0;
}
/*

Enter an integer: 10
Your integer is 10

Enter a character: a
Your character is a

Enter a character: b
Your character is b

Enter an integer: 20
Your integer is 20

*/