#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (!head)
		return;

	while (*head)
	{
		prev = (*head)->next;
		free(*head);
		*head = prev;
	}
	*head = NULL;
}
