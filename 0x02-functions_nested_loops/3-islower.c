#include "main.h"
/**
 *_islower - checks for lowercase character
 * @c: argument type int
 *
 * Return: r
 */
int _islower(int c)
{
	int r;

	if (c <= 'z')
	{
		r = 1;
		_putchar(r);
	}
	else
	{
		r = 0;
		putchar(r);
	}
	return (r);
}
