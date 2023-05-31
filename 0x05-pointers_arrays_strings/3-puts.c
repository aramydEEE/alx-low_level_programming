#include "main.h"
#include <unistd.h>

/**
 * _puts -  function that prints a string
 * @str: parameter of the function
 */

void _puts(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		;
	}
	write(1, &str, i++);
}
