#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: Argument to the function
 * Return: r
 */

int _abs(int c)
{
	int r;

	if (c < 0)
	{
		r = -1 * c;
	}
	r = c;
	return (r);
}
