#include <stdio.h>

/*
 * header at the first line
 * and followed by main
 * function
 */
int main(void)
{
	int ascii_code;
	for (ascii_code = 97; ascii_code <= 122; ascii_code++)
		putchar(ascii_code);
	for (ascii_code = 65; ascii_code <= 90; ascii_code++)
		putchar(ascii_code);
	putchar(10);
	return (0);
}
