#include "main.h"

/**
 * puts_half - prints seconf half of a str
 * @str: char array
 * Description: If odd number, prints(length)
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
