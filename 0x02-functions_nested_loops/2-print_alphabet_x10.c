#include "main.h"
/**
 * print_alphabet_x10 - print x10 lines of alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
