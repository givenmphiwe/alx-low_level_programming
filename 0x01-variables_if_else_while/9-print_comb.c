#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
		
}
