#include "main.h"

/**
 * *_strspn - return the number
 * @s: string to check
 * @accept: char
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmpt = 0;

	for (i = 0; s[i] >= 48; i++)
	{
		for (j = 0; accept[j] > 48; j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpt);
}
