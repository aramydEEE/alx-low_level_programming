#include "main.h"

/**
 * print_square - function that prints a square
 * @size: integer type argument
 */

void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		n = 1;
		while (n <= size)
		{
			m = 1;
			while (m <= size)
			{
				_putchat('#');
				m++;
			}
			_putchar('\n');
			n++;
		}
	}
}
