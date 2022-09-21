#include "main.h"

/**
 * *_strncat - concates two strings
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';

	return (dest);
}
