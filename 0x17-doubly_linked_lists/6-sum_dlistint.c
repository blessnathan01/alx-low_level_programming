#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * of a linked list i.e. dlistint_t
 * @head: pointer to the list
 *
 * Return: 0 if the list is empty
 * otherwise integer.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int total;

	tmp = head;
	total = 0;
	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}

	return (total);
}
