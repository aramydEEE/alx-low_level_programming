#include "main.h"

/**
 * print_square - function that prints a square
 * @size: integer type argument
 */

void print_square(int size)
{
	int n = 1;

	while (n <= size)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('#');
		}
		n++
	}
	_putchar('\n');
}
