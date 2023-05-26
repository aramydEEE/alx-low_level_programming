#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz -  program that prints the numbers from 1 to 100
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			printf("%d", x);
		}
		_putchar(' ');
		x++;
	}
	_putchar('\n');
}
