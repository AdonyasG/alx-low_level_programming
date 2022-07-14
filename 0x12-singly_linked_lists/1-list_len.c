#include "lists.h"

/**
 * list_len - prints number of elements of list_t
 * @h: singly linked list
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
