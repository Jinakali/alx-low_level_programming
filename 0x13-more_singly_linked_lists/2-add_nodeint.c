#include "lists.h"
/**
  *add_nodeint-add node at beginning
  *@head:double pointer to addres of 1st node
  *@n:data to store
  *Return:address of new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (*head);
}
