#include "lists.h"

/**
 * add_dnodelist_end - adds a new node at the end
 * of the a linked list i.e. dlistint_t
 * @head: double pointer to the value
 * @n: value
 *
 * Return: address of the new element
 * NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;
	dlistint_t *end;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;
	fresh_node->prev = NULL;

	if (*head == NULL)
		*head = fresh_node;
	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;

		fresh_node->prev = end;
		end->next = fresh_node;
	}

	return (fresh_node);
}
