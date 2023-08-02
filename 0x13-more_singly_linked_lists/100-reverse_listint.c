#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 *
 * @head: pointer on the first node in list
 *
 * Return: pointer on the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
