#include "lists.h"
/**
  * reverse_listint - reverses a listint_t.
  * @head: pointer to pointer of first list element.
  *
  * Return: pointer to first node of reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *working;

	temp = NULL;
	working = NULL;
	while (*head != NULL)
	{
		working = *head;
		*head = (*head)->next;
		working->next = temp;
		temp = working;
	}
	*head = working;

	return (*head);
}
