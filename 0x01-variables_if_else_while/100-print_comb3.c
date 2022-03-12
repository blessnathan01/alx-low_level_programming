#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_code;

	for (ascii_code = 48; ascii_code <= 56; ascii_code++)
	{
		putchar(ascii_code);
		putchar(ascii_code + 1);
		if (ascii_code < 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
