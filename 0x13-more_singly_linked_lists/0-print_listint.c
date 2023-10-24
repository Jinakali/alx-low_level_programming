#include "lists.h"
/**
  *print_listint-prints all the elements of a listint_t list
  *@h:head of node
  *Return:no of nodes
  */
size_t print_listint(const listint_t *h)
{
	unsigned int c;

	if (h == NULL)
		return (0);

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
