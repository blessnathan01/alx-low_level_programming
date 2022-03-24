#include "main.h"

/**
 * _strcpy - copies a string
 * count till all bytes are written
 * @dest: pointer to a string
 * @src: pointer to a string
 * @i: index
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_byte;

	for (count_byte = 0; (count_byte < n) && (src[count_byte] != '\0'); count_byte++)
	{
		dest[count_byte] = src[count_byte];
		for (; count_byte < n; count_byte++)
		{
			dest[count_byte] = '\0';
		}
	}
	return (dest);
}
