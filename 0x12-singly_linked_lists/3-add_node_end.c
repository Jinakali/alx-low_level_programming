#include "lists.h"
/**
 *add_node_end-add_node at the end of a list
 *@head:address of head node
 *@str: string to initialise the new node with
 *Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *list_ptr;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	/* find last node */

	list_ptr = *head;
	/*check whether list empty b4 dereferencing next node*/
	if (list_ptr == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (list_ptr->next != NULL)
			list_ptr = list_ptr->next;

	list_ptr->next = new_node;
	}

	return (new_node);
}
/**
 *_strlen - find length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
