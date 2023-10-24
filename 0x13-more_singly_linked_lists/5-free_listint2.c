#include "lists.h"
/**
  *free_listint2-free all nodes in list and set head to NULL
  *@head: double pointer to beginning of nodes
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;/*list empty*/
	/*loop through all nodes*/
	while (*head != NULL)
	{
		temp = *head;/*hold current node address*/
		*head = (*head)->next;/*point to next node*/
		free(temp);/*free current node*/
	}
}
