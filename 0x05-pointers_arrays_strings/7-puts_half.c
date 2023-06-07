#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: Argument to the function
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i]; i++)
	{
		;
	}
	if (i % 2 > 0)
	{
		n = (i - 1) / 2;
		n++;
	}
	else
	{
		n = i / 2  ;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
