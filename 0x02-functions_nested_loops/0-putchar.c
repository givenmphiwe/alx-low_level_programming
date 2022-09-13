#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
