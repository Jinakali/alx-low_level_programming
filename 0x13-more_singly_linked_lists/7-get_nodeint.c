#include "lists.h"
/**
  *get_nodeint_at_index-returns the nth node of a listint_t linked list
  *@head:poinnter to head node
  *@index: is the index of the node, starting at 0
  *Return:nth node of a listint_t linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = index; i > 0; i--)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
