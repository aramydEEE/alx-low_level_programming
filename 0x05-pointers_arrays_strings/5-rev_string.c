#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - function that prints a string, in reverse
 * @s: parameter of the function
 */

void rev_string(char *s)
{
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	r = i - 1;

	for (; r >= 0; r--)
	{
		int x;

		x = _putchar(s[r]);
		s = "x";
	}
}
