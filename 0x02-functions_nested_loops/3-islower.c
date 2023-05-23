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
		r = 0;
	}
	else
	{
		r = 1;
	}
	return (r);
}
