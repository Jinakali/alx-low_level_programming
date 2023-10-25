#include "lists.h"
/**
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp1;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);
	while (temp != NULL)
	{
		c++;
		if (c == index)
		{
			temp1 = temp->next;
			temp = temp->next->next;
			free(temp1);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
