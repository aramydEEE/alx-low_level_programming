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
		r = _putchar(1 + '0');
	}
	else
	{
		r = _putchar(0 + '0');
	}
	return (r);
}
