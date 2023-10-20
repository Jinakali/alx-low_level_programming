#include "lists.h"
/**
  *list_len-counts no of elements in node
  *@h:head node
  *Return: no of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *ptr = h;

	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
