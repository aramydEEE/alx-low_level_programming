#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer type argument
 */

void print_diagonal(int n)
{
	int x;

	x = 1;
	while (x <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
			_putchar('\');
		}
		x++
	}
	_putchar('\n');
}
