#include "lists.h"
/**
  *add_nodeint_end- add_node at end of list
  *@head:function pointer to address of first node
  *@n: data to add
  *Return:the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_n;

	last_n = *head;
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;

	if (last_n == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (last_n->next != NULL)
			last_n = last_n->next;
	last_n->next = new_n;
	}
	return (new_n);
}
