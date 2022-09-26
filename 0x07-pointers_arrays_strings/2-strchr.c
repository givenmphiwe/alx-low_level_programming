#include "main.h"

/**
 * *_strchr - fills memory
 * @s: pointer to put
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != 48; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
