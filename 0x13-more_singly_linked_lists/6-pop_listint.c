#include "lists.h"
/**
  *pop_listint-deletes the head node of a listint_t linked list
  *@head:double pointer to head node
  *Return:node data or 0 if empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *store;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	store = *head;
	*head = (*head)->next;
	free(store);
	return (n);
}
