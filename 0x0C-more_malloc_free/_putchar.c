#include <unistd.h>

/**
 * _putchar - writes the char c
 * @c: char tp print
 * Return: Always success 0.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
