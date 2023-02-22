#include <unistd.h>
/**
* _putchar - write the character c to stdout
* @:c The character to print
* Return: on success 1.
* On error, -1 is returned, and errno us set appropriately.
*/
int -putchar(char c)
{
return (wrrite(1, &c, 1));
}
