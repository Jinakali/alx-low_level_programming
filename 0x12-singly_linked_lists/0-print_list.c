#include "lists.h"
/**
*print_list-prints all elements of nodes in a list
*@h: head of node
*Return: no of nodes in list
*/
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	unsigned int i;

	if (h == NULL)
		return (0);

	i = 0;
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
			p = p->next;
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
			p = p->next;
		}
		i++;
	}
	return (i);
}
