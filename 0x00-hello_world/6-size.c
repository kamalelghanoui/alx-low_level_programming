#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu Byte(s)\n", sizeof(char));
	printf("Size of an int: %lu Byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu Byte(s)\n", sizeof(long int));
	printf("Size of a long long int:c%lu Byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %lu Byte(s)\n", sizeof(float));
	return (0);
}

