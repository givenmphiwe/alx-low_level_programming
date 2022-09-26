#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: dest
 * @src: source
 * @n: max bytes used
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
