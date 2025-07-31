#include "lists.h"

/**
* add_dnodeint_end -  add new node at the end of a list_t list
* @head: double pointer to th head of a list
* @n: int to store in the new node
* Return: pointer to the new head or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (*head == NULL)
	*head = new_node;
else
{
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
}

return (new_node);
}
