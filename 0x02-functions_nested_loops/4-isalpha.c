#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: function's argument type int
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}


