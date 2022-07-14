#include "lists.h"
/**
 * add_node_end - adds a new node to the end
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *new;
	int i = 0;

	while (str[i])
		i++;

	first = malloc(sizeof(list_t));
	if (first == NULL)
	{
		return (NULL);
	}

	first->str = strdup(str);
	first->len = i;
	first->next = *head;

	if (strdup(str) == NULL)
	{
		free(first);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	else
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = first;
		return (first);
	}
}
