#include <stdio.h>

/*
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_code;

	for (ascii_code = 97; ascii_code <= 122; ascii_code++)
		if (ascii_code == 101 || ascii_code == 113)
			continue;
		else
			putchar(ascii_code);
	putchar(10);
	return (0);
}
