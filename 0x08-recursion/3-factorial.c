#include "main.h"

/**
 * factoral - finds factorial
 * @n: int
 * Return: int
 */

int factoral(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factoral(n - 1));
}
