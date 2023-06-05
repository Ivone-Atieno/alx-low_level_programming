#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: nth node of the linked list else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x = 0;
	listint_t *prev = head;

	while (prev != NULL)
	{
		if (x == index)
		{
			return (prev);
		}

		x++;

		prev = prev->next;
	}
    /* If we reach this point, the index is out of range */
	return (NULL);
}
