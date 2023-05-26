#include "main.h"

/**
 * print_square - function that prints a square
 * @size: integer type argument
 */

void print_square(int size)
{
	int n, m;

	n = 1;
	while (n <= size)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}

		m = 1;
		while (m <= size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
