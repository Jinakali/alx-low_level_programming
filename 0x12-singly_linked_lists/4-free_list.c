#include "lists.h"
/**
  *free_list- frees the whole list, its noded and their elemnts
  *@head:address of a node
  */
void free_list(list_t *head)
{
	list_t *hold;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		hold = head;
		head = hold->next;
		free(hold->str);
		free(hold);
	}
}
