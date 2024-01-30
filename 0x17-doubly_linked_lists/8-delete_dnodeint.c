#include "lists.h"
/**
 *delete_dnodeint_at_index-deletes the node at index·
 *@head:head node
 *@index:index
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	count = 0;
	current = *head;
	if (*head == NULL)
		return (-1);
	for (; current != NULL && count < index; count++)
		current = current->next;
	if (current == NULL)
		return (-1);
	if (current->prev == NULL)
		*head = current->next;
	else
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
