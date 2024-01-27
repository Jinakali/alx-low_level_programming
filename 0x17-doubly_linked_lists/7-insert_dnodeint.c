#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head node
 * @idx: index to insert new node
 * @n: data for new node
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));  /* Add node at the beginning */

	current = *h;
	for (i = 0; current != NULL && i < idx; i++)
		current = current->next;

	if (i != idx)
		return (NULL);  /* idx out of range */

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new_node;  /* Link from previous node */
	current->prev = new_node;  /* Link from next node */

	return (new_node);
}

