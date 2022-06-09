#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked list i.e. dlistint_t
 * @h: pointer to the list
 *
 * Return: number of nodes/elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t *tmp;

	counter = 0;
	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
