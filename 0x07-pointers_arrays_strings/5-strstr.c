#include "main.h"

/**
 * *_strstr - Locates a substr
 * @haystack: str to search
 * @needle: The substr to locate
 * Return: if statements
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[j] > 48; i++)
	{
		for (j = i; haystack[j] > 48 && needle[j - i] > 48; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == 48)
		{
			return (haystack + i);
		}
	}
	return (0);
}
