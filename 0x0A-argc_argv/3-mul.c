#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of the command line arguments
 *
 * Return: Always 0.
 * 1 when there is an error
 */
int main(int argc, char *argv[])
{
	int i, prod;

	prod = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
