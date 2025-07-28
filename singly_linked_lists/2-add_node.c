#include "lists.h"

/**
* add_node -  add new node at the beginning of a list_t list
* @head: double pointer to th head of a list
* @str: string to store in the new node
* Return: pointer to the new head or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dupstr;
unsigned int len = 0;

dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);
	while (str[len])
		len++;

new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dupstr);
		return (NULL);
	}

new_node->str = dupstr;
new_node->len = len;
new_node->next = *head;
*head = new_node;

return (new_node);
}
