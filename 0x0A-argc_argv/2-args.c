#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: 1st parameter
 * @argv: 2nd parameter
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	printf("\n");
	return (0);
}
