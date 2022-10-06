#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using maloc
 * @b: int
 * Return: pointer to the array
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (!m)
		exit(98);

	return (m);
}
