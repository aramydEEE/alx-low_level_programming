#include <stdio.h>

/**
 * main - print numbers 1 - 9 using putchar
 *
 * Return: 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
