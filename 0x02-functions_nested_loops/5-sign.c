#include "main.h"

/**
 * print_sign - check numbers
 * @number : number to check
 * Return: 0 or 1
 */
int  print_sign(int number)
{
	int test;

	if (number > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (number == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
