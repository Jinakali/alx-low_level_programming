#include "lists.h"
/**
 *sum_dlistint- sum of all the data (n) of a dlistint_t linked list
 * @head:head node address
 * Return: sum or 0 when empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (result);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
