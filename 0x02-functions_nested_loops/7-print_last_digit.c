#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: the only argument to the function
 * Return: r
 */

int print_last_digit(int c)
{
	int r;

	r = c % 10;
	_putchar('0' + r);
	return (r);
}
