#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a list
* @h: Double pointer to the head of the list
* @idx: Index at which the new node should be inserted
* @n: Integer value to store in the new node
* Return: new node, or NULL if it failed or index is out of bounds
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;
if (!h)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
while (current && i < idx - 1)
{
current = current->next;
i++;
}
if (!current)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
new_node->prev = current;
if (current->next)
{
current->next->prev = new_node;
current->next = new_node;
}
return (new_node);
}
