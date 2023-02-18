#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
i = 0;
while (i <= 8)
{
j = 1;
while (j <= 9)
{
if (i == 8 || j == 9)
{
putchar(',');
putchar(' ');
}
putchar(i);
putchar(j);
}
}
putchar('\n');
return (0);
}
