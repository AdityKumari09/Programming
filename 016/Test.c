#include <stdio.h>

int main(void)
{
    int a;
    char b;
    printf("Enter an integer and a character: ");
    scanf("%d", &a);
    scanf("%c", &b);
    scanf("%c", &b);

    printf("\nYour integer is %d\n", a);
    printf("Your character is %c\n", b);

    return 0;
}
/*

Enter an integer and a character: 10 a

Your integer is 10
Your character is a

*/