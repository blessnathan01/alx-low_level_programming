#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to s2
 *
 * Return: pointer to a newly allocated memory space
 * on failure, null as empty string is returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int length1, length2, size, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	length2 = 0;
	while (s2[length2] != '\0')
		length2++;
	if (n >= length2)
		n = length2;
	size = length1 + n;
	s3 = malloc((sizeof(char) * size) + 1);
	if (s3 == NULL)
		return (NULL);
	x = 0;
	while (x < length1)
	{
		s3[x] = s1[x];
		x++;
	}
	y = 0;
	while (x < size)
	{
		s3[x] = s2[y];
		x++;
		y++;
	}
	s3[x] = '\0';
	return (s3);

}
