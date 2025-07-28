#include "lists.h"

/**
* free_list - free list_t
* @head: pointer to the first node
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
