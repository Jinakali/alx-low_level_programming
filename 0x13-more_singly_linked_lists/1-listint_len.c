#include "lists.h"
/**
  *listint_len -count no of  elements of a listint_t list
  *@h:head of node
  *Return:no of elements
  */
size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	if (h == NULL)
		return (c);
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
