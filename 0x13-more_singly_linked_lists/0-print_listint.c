#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_listint -> function that prints all elements of a listint_t list.
 *
 * @h: header pointer.
 *
 * Return: size_t of the list.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
