#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: Argument to the function
 *
 * Return: r
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
