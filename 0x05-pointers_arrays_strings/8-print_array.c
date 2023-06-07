#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	for (n = 0; a[n]; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
