#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int num;

	for (num = 1; num <= 10; num++)
	{

		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
