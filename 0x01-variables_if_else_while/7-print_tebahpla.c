#include <stdio.h>

/**
 * main - reverse the alphabet.
 *
 * Return: 0.
 */

int main(void)
{
	char x;

	x = 'z';
	do {
		putchar(x);
		x--;
	} while (x >= 'a');
	putchar('\n');
	return (0);
}
