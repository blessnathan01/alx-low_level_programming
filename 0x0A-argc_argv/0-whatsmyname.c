#include <stdio.h>

/**
 * main - print program's name
 * @argc: number of command line arguments
 * @argv: arrays of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
