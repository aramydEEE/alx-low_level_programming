#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: integer type argument
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	int r;

	if (c >= 0 && c <= 9)
	{
		r = 1;
		_putchar(r + 48);
	}
	else
	{
		r = 0;
		_putchar(r + 48);
	}
	return (r);
}
