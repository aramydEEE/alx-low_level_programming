#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		int r, s, t;

		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			s = r / 10;
			t = r % 10;
			_putchar(s + '0');
			_putchar(t + '0');
		}
		_putchar('\n');
	}
}

