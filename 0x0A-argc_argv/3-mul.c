#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: 1st parameter
 * @argv: 2nd parameter
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
