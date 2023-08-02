#include "lists.h"

/**
 * sum_listint -> Calculates the value of all the data in a listint_t list
 *
 * @head: first node in the linked list
 *
 * Return: resulting int sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}
