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
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
