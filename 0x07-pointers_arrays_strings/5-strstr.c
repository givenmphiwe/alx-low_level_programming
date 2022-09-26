#include "main.h"

/**
 * *_strstr - Locates a substr
 * @haystack: str to search
 * @needle: The substr to locate
 * Return: if statements
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != 48)
	{
		i = haystack;
		j = needle;

		while (*haystack != 48 && *j != 48 && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
