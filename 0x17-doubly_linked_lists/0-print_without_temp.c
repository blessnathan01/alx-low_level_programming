#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * and the number of elements of the list
* @h: pointer to the list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t increment;

	for (increment = 0; h != NULL; increment++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (increment);
}
