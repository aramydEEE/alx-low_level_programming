#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer type argument
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			int j = 1;

			while (j <= i - 1)
			{
				_putchar(' ');
				j++;
			}
			_Putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
