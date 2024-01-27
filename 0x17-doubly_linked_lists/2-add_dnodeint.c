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

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
