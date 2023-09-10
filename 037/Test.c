#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\n");

    int i = 1;

    while (i <= 9)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        ++i;
    }

    return 0;
}

/*

Enter an integer: 13

13 x 1 = 13
13 x 2 = 26
13 x 3 = 39
...
13 x 9 = 117

 */