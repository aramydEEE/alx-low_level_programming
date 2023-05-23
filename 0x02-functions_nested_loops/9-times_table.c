#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		int r;

		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			_putchar(r);
			_putchar('\n');
		}
	}
}

