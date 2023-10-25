#include"lists.h"
/**
 *insert_nodeint_at_index-inserts a new node at a given position.
 *@head:first node
 *@idx:index
 *@n:data
 *Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int c = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (temp != NULL)
	{
		c++;
		/*stop at immediate node b4 point of insertion*/
		if (c == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	return (NULL);
}
