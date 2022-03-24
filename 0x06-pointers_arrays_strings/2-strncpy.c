#include "main.h"

/**
 * _strncpy - copies a string
 * count till all bytes are written
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of bytes to be used
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int countB;

	for (countB = 0; (countB < n) && (src[countB] != '\0'); countB++)
	{
		dest[countB] = src[countB];
		for (; countB < n; countB++)
		{
			dest[countB] = '\0';
		}
	}
	return (dest);
}
