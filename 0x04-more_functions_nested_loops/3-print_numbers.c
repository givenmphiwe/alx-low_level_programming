#include "main.h"

/**
 * print_numbers - check the code
 * @i: hold number
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
	
}
