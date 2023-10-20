#include "lists.h"
/**
  *add_node-add_node at the beginning of a list
  *@head:address of head node
  *@str: string to initialise the new node with
  *Return: pointer to new node or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;
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
