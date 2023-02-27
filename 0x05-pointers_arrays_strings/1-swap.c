#include <stdio.h>

void swap_int(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap_int(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

