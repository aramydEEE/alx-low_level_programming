#include <stdio.h>
/**
 * main - Entry Point
 * Description: program that prints all possible dif combinations of two digits
 * Return: Always 0.
 */

int main(void)
{
	int x, y;

	x = 0;
	for (; x <= 9; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			putchar(x + 48);
			putchar(y + 48);
			if (x < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
