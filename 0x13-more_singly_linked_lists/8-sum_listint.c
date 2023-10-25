#include "lists.h"
/**
  *sum_listint-sums all the data (n) of a listint_t linked list
  *@head:first node;
  *Return:  sum of all the data (n)
  */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
