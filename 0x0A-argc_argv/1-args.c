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
	while (argv)
	{
		printf("%d\n", argc - 1);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
