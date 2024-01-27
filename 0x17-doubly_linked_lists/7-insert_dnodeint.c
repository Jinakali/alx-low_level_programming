#include "lists.h"
/**
 * insert_dnodeint_at_index- inserts a new node at a given position
 * @h:double pointer to head node
 * @idx: index
 * @n: element of new node
 * Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index;
	dlistint_t *current;
	dlistint_t *temp;
	dlistint_t *new_node;

	index = 0;
	current = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (current == NULL && index == 0)
	{
		current = new_node;
		return (current);
	}

	while (current != NULL)
	{
		if (idx == index)
		{
			temp = current->prev;
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = current;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		index++;
	}
	return (NULL);
}
