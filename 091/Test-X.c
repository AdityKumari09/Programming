#include <stdio.h>

int* func(void);

int main(void)
{
    int* ptr = func();
    printf("%d\n", *ptr);
}

int* func(void)
{
    int x = 10;
    return &x;
}