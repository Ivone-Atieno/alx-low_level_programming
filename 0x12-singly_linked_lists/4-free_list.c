#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: pointer to the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
