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
			if (r > 9)
			{
				s = r / 10;
				t = r % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(s + 48);
				_putchar(t + 48);
			}
			else if (r > 0 && r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + 48);
			}
			else
			{
				_putchar(r + 48);
			}
			if (y == 9)
			{
			_putchar('\n');
			}
		}
	}
}
