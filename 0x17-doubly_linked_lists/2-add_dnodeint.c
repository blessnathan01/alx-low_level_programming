#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of a
 * linked list i.e. dlistint_t
 * @head: double pointer to data
 * @n: data
 *
 * Return: address of the new element
 * NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = NULL;

	if (*head == NULL)
		*head = fresh_node;
	else
	{
		(*head)->prev = fresh_node;
		fresh_node->next = *head;
		*head = fresh_node;
	}

	return (fresh_node);
}
