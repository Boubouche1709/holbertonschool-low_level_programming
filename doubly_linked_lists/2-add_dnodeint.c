#include "lists.h"

/**
* add_dnodeint -  add new node at the beginning of a list_t list
* @head: double pointer to th head of a list
* @n: string to store in the new node
* Return: pointer to the new head or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
