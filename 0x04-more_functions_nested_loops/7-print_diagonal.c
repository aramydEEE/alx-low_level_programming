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
			break;
		}
		else
		{
			_putchar(' ');
			_putchar(92);
		}
		x++;
		_p('\n');
	}
	_putchar('\n');
}
