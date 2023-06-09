#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the linkef list
 */

void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head->next;
		free(head);

		head = prev;
	}
}
