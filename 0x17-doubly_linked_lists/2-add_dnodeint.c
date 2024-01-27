#include "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to head node
 * @n: new node element
 * Return: head address or NULL
 * Description: simple swap, make new's next = &head and prev = NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (*head);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
