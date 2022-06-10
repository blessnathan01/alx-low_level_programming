#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new
 * node at a given position
 * @h: double pointer to a value
 * @idx: index of the list where the new node
 * should be added, starting with zero
 * @n: value
 *
 * Return: address of the new node
 * NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh_node;
	dlistint_t *tmp;
	unsigned int increment;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = NULL;

	if (*h == NULL)
	{
		*h = fresh_node;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp)
	{
		if (increment == idx && idx != 0)
		{
			fresh_node->next = tmp;
			fresh_node->prev = tmp->prev;
			tmp->prev->next = fresh_node;
			tmp->prev = fresh_node;
			return (fresh_node);
		}
		increment++;
		tmp = tmp->next;
	}
	if (increment == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
