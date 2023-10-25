#include "lists.h"
/**
  *delete_nodeint_at_index-t deletes the node at index index of a  linked list
  *@head:pointer to head node
  *@index: position of node in list
  *Return: 1 on success -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp1;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0 && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		c++;
		if (c == index)
		{
			temp1 = temp->next;
			if (temp1 != NULL)
			{
				temp->next = temp1->next;
				free(temp1);
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		temp = temp->next;
	}
	return (-1);
}
