#include "main.h"

/**
 * *_strpbrk - search a str for any bytes
 * @s: str
 * @accept: str to match
 * Return: Pointer to the s that matches
 * Or Null will be found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

