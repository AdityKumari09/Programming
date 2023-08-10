#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter 2 integers : ");
    scanf("%d%d", &n, &m);

    if (n > m)
    {
        printf("%d is greater\n", n);
    }

    else if (n == m)
    {
        printf("They are equal\n");
    }

    else
    {
        printf("%d is greater\n", m);
    }

    return 0;
}
/*

1)
Enter 2 integers: 10 5
10 is greater

2)
Enter 2 integers: 5 5
They are equal

*/