#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: integer type argument for the function
 */

void print_line(int n)
{
	int x;

	for (x = 1; x == n; x++)
	{
		if (x <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
