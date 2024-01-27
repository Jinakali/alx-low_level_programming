#include "lists.h"
/**
 * dlistint_len-return no of elements
 * @h: pointer tp head node
 * Return:no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	for (; h->next != NULL; count++)
		h = h->next;

	/*because transversal reaches second last node*/
	count = count + 1;
	return (count);
}
