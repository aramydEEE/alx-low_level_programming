#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter of the function
 */

void print_rev(char *s)
{
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	r = i;

	for (; s[r] < '\0'; r--)
	{
		write(1, &s, 1);
	}
	_putchar('\n');
}
