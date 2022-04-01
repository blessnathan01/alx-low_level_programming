#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of the command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	i = 0;
	while (i < argc - 1)
		i++;
	printf("%d\n", i);
	return (0);
}
