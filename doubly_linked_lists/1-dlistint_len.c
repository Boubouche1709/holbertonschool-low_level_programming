#include "lists.h"

/**
* dlistint_len -  function that prints all the elements of a list_t list
* @h: first node
* Return: numbers of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
