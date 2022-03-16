#include "main.h"
#include <ctype.h>

/**
 * print_sign - function to print sign
 * @c:  is the int that will use for the argument of the function
 * Return: 1 if lowercase or uppercase character 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);

	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar(n);
		return (-1);
	}
}
