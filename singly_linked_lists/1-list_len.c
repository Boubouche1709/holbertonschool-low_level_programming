#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list
* @h: first node
* Return: numbers of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
return (count);
}
