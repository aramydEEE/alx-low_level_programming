#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: Argument's Parameter
 * Return: A character
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * sizeof(str));
	if (sizeof(ptr) < sizeof(malloc(sizeof(char) * sizeof(str))))
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
