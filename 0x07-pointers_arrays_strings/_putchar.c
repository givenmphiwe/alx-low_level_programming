#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: ALways 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
