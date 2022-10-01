#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On Success 1
 * on error, -1 is returned and erno is st appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
