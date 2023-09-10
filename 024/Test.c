#include <stdio.h>

int main(void)
{
    double n;
    printf("Enter the number of units: ");
    scanf("%lf", &n);

    if (n > 250.0)
    {
        printf("Rs. %.2f\n", ((50 * 0.5) + (100 * 0.75) 
                             + (100 * 1.20) + ((n - 250) * 1.50)) * 1.2);
    }

    else if (n > 150.0)
    {
        printf("Rs. %.2f\n", (50 * 0.5) + (100 * 0.75) + ((n - 150) * 1.20));
    }

    else if (n > 50.0)
    {
        printf("Rs. %.2f\n", (50 * 0.50) + (n - 50) * 0.75);
    }

    else 
    {
        printf("Rs. %.2f\n", (n * 0.50));
    }

    return 0;
}
/*

1)
Enter the number of units: 20.3
Rs. 10.15

2)
Enter the number of units: 115.7
Rs. 74.28

3)
Enter the number of units: 180.5
Rs. 136.60

4)
Enter the number of units: 260.2
Rs. 282.36

*/

/*

The bill is calculated as follows :-

For the first 50 units, Rs. 0.50 per unit.
For the next 100 units, Rs. 0.75 per unit.
For the next 100 units, Rs. 1.20 per unit.
For the remaining units, Rs. 1.50 per unit.

Also, if the number of units is more than 250.0, then additional 20% is added
to the bill.

*/