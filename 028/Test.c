#include <stdio.h>

int main(void)
{
    int ul, ll;
    printf("Enter upper and lower limits: ");
    scanf("%d", &ul);
    scanf("%d", &ll);

    while (ul >= ll)
    {
        printf("%d ", ul);
        --ul;
    }

    printf("\n");

    return 0;
}




/*

Enter upper and lower limits: 10 5
10 9 8 7 6 5

*/