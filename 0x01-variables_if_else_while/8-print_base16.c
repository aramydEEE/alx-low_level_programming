#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
