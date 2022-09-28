#include <unistd.h>

/**
 * _putchar -  writes the char
 * @c: The char
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
