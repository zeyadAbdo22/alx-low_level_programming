#include "lists.h"

/**
 * pop_listint -> function that deletes the head node about listint_t list,
 * and returns the head node data
 *
 * @head: pointer to head node.
 *
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (n);
}
