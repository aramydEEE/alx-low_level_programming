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
	r = i - 1;

	for (; r >= 0; r--)
	{
		s = _putchar(s[r]);
	}
}
