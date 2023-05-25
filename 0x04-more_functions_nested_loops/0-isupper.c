#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: one integer argument of the function
 * Return: 0 or 1.
 */

int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
	{
		r = _putchar(1 + 48);
	}
	else
	{
		r = _putchar(0 + 48);
	}

	return (r);
}
