#include "lists.h"
/**
  *free_listint-free all nodes in list
  *@head: pointer to beginning of list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;/*list empty*/
	/*loop through all nodes*/
	while (head != NULL)
	{
		temp = head;/*hold current node address*/
		head = head->next;/*point to next node*/
		free(temp);/*free current node*/
	}
}
