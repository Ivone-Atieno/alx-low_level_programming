#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: pointer to the linkedlist
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len_count = 0;

	while (h != NULL)
	{
		len_count++;
		h = h->next;
	}
	return (len_count);
}
