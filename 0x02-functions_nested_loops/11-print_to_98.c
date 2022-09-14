#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: num to start
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
