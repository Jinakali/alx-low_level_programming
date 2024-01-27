#include "lists.h"
/**
 * get_dnodeint_at_index-function that returns the nth node of a
 * dlistint_t linked list
 * @head:head node address
 * @index:index
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head->next != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	/*to factor in last node*/
	count++;

	if (count == index)
		return (head);
	else
		return (NULL);

}
