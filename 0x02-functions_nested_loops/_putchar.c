#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On succcess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char alpha)
{
	return (write(1, &alpha, 1));
}
