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
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
