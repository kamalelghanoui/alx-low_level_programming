#include <stdio.h>
/**
 * *main - Entry poiny
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu Byte(s)\n", sizeof(char));
	printf("Size of an int: %lu Byte(s)\n", sizeof(int));
	printf("Size of a long: %lu Byte(s)\n", sizeof(long));
	printf("Size of a long long: %lu Byte(s)\n", sizeof(long long));
	printf("Size of a float is: %lu Byte(s)\n", sizeof(float));
	return (0);
}

