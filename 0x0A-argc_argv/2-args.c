#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
