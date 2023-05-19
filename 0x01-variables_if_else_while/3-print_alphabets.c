#include <stdio.h>

/**
 * main - Print alphabets in lowercase and uppercase
 *
 * Return: 0.
 */

int main(void)
{
	char x, y;

	x = 'a';
	y = 'A';
	do {
		putchar(x);
		x++;
	} while (x <= 'z');
	do {
		putchar(y);
		y++;
	} while (y <= 'Z');
	putchar('\n');
	return (0);
}
