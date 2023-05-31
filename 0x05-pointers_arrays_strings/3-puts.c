#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string
 * @str: parameter of the function
 */

void _puts(char *str)
{
	write(1, str, _strlen(str));
}
