#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at index index of list.
  * @head: double pointer to list.
  * @index: index of node to be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	dlistint_t *tp;
	unsigned int len = dlistint_len2(*head);

	if (*head == NULL || len < index)
		return (-1);
	tmp = *head;
	if (index == 0 && (*head)->next == NULL)
	{
		free(tmp), *head = NULL;
		return (1);
	}
	if (index ==  0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	if (index > 0)
	{
		while (index != 0)
			tmp = tmp->next, index--;
		if (tmp->next == NULL)
		{
			tp = *head;
			while (tp->next != NULL)
				tp = tp->next;
			tmp2 = tp->prev;
			tmp2->next = NULL, free(tp);
			return (1);
		}
		tmp2 = tmp->prev;
		tmp2->next = tmp->next;
		tmp->next->prev = tmp2;
	}
	free(tmp);
	return (1);
}

/**
  * dlistint_len2 - returns number of elements in a lineked dlistint_t list.
  * @h: pointer to list.
  *
  * Return: number of elements in list.
  */
unsigned int dlistint_len2(dlistint_t *h)
{
	dlistint_t *tmp;
	unsigned int count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
