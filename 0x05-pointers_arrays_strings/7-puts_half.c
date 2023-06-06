#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: Argument to the function
 */

void puts_half(char *str)
{
	int i, r, n;

	for (i = 0; str[i]; i++)
	{
		r = i;
	}
	if (r % 2 > 0)
	{
		n = (r - 1) / 2;
	}
	else
	{
		n = r / 2;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
}
