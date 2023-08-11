#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to pointer to the head of the linked list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *curr, *next;

	if (!h || !*h)
		return (0);

	curr = *h;
	*h = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		num++;

		if (next >= curr)
			break;

		curr = next;
	}
	return (num);
}
