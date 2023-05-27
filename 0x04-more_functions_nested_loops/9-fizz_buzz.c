#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz -  program that prints the numbers from 1 to 100
 */

void fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		printf(" ");
	}
	printf("\n");
}
