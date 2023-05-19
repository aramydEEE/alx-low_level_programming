#include <stdio.h>

/**
 * main - prints the alphabet in lowercase excluding q & e
 *
 * Return: 0.
 */

int main(void)
{
	char x;

	x = 'a';
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
