#include "lists.h"

/**
 * free_listint_safe - Free  listint_t list.
 * @h: Pointer to the pointer about head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		if ((void *)temp <= (void *)current)
		{
			*h = NULL;
			return (size);
		}
		free(temp);
	}
	*h = NULL;
	return (size);
}
