#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Pointer to the newly created array
 * On malloc failure, null is returned.
 */
int *array_range(int min, int max)
{
	int r, i;
	int *p;

	r = 0;
	if (min > max)
		return (NULL);
	r = ((max + 1) - min);
	p = malloc(r * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
		*(p + i) = min + i;
	return (p);
}
