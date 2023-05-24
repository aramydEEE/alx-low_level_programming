#include <stdio.h>
/**
 * main - Entry Point
 * Description: program that prints all possible different combinations of two digits
 * Return: Always 0.
 */

int main(void)
{
	int x, y;
	
	x = 0;				    	
	for (; x < 10; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x < 8 && y <= 9)
			{
		        	putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
