#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer 00:00 to 23:59
 */
void jack_bauer(void)
{
	int w, x, y, z;

	w = 0;
	while (w <= 2)
	{
		{
			w++;
		}
		x = 0;
		while (x <= 9)
		{
			{
				x++;
			}
			y = 0;
			while (y <= 5)
			{
				{
					y++;
				}
				z = 0;
				while (z <= 9)
				{
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					z++;
					_putchar('\n');
				}
			}
		}
	}
}
