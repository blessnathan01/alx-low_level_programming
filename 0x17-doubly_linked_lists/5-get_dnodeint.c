#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a linked list i.e. dlistint_t
 * @head: pointer to the list
 * @index: position of the nth node starting
 * from zero
 *
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	for (tmp = head; tmp != NULL && index != 0; index--)
		tmp = tmp->next;

	return (tmp);
}
