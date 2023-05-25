#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: integer type argument for the function
 */

void print_line(int n)
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
			_putchar('_');
		}
		x++;
	}
	_putchar('\n');
}
