#include <stdio.h>

/**
 * main - print numbers separated by comma
 * By salau morufat aramide
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
