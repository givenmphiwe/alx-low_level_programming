#include "main.h"

/**
 * print_last_digit - return last digit/numer
 * @n : num to check
 * Return: 0 Always (Succes)
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + 48);
	return (nv);
}
