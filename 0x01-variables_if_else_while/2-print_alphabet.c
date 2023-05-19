#include <stdio.h>

/**
 * main - print alphabets in lowercase.
 * By salau m. a
 * Return: 0.
 */

int main(void)
{
	char x;

	x = 'a';
	do {
		putchar(x);
		x++;
	} while (x <= 'z');
	putchar('\n');
	return (0);
}
