#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the square root
 * @n: int to find sqrt
 * @val: sqrt
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
