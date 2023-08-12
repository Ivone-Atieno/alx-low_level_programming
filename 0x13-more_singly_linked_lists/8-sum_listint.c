#include "lists.h"

/**
 * sum_listint - Adds all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *prev = head;

	while (prev)
	{
		sum += prev->n;
		prev = prev->next;
	}
	return (sum);
}
