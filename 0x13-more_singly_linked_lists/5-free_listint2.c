#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointer to the listint_t list to be free
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
