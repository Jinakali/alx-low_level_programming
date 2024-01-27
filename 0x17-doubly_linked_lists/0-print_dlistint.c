#include "lists.h"
/**
 * print_dlistint-prints all the elements of a dlistint_t list.
 * @h: pointer to head node
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 1;
	const dlistint_t *h_copy = h;

	if (h_copy == NULL)
		return (0);
	if (h_copy->next == NULL)
	{
		printf("%d\n", h_copy->n);
		return (count);
	}

	while (h_copy->next != NULL)
	{
		printf("%d\n", h_copy->n);
		count++;

		h_copy = h_copy->next;
	}
	printf("%d\n", h_copy->n);
	return (count);
}
