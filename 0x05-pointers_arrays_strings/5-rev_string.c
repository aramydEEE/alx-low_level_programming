#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - function that prints a string, in reverse
 * @s: parameter of the function
 */

void rev_string(char *s)
{
	int i, r, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	r = i;

	for (i = 0; i < r / 2; i++)
	{
		temp = s[i];
		s[i] = s[r - i - 1];
		s[r - i - 1] = temp;
	}
}
