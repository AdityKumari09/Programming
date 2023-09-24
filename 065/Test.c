#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);

    int temp = (r + 1) / 2;

    int i = 1;

    while (i <= temp)
    {
        int j = 1;

        while (j <= temp - i)
        {
            printf("  ");
            ++j;
        }

        ///////////////////////////////////////////

        j = 1;

        while (j <= i)
        {
            printf("%c ", j + 'A' - 1);
            ++j;
        }

        ////////////////////////////////////////////

        j = 1;

        while (j < i)
        {
            printf("%c ", i - j + 'A' - 1);
            ++j;
        }

        printf("\n");
        ++i;
    }

    i = temp - 1;

    while (i >= 1)
    {
        int j = 1;

        while (j <= temp - i)
        {
            printf("  ");
            ++j;
        }

    ///////////////////////////////////////////

        j = 1;

        while (j <= i)
        {
            printf("%c ", j + 'A' - 1);
            ++j;
        }

    ////////////////////////////////////////////

        j = 1;

        while (j < i)
        {
            printf("%c ", i - j + 'A' - 1);
            ++j;
        }

        printf("\n");
        --i;
    }

    return 0;
}
/*
Enter the number of rows (odd): 7

      A
    A B A
  A B C B A
A B C D C B A
  A B C B A
    A B A
      A

*/