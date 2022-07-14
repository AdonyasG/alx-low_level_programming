#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
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

	*head = first;

	return (first);
}
