#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *curr = head;
	const listint_t *temp = NULL;

	while (!curr)
	{
		printf("[%p] %dn", (void *) curr, curr->n);
		num++;

		if (curr < temp)
		{
			printf("-> [%p] %dn",
			       (void *) curr->next, curr->next->n);
			exit(98);
		}
		temp = curr;
		curr = curr->next;
	}
	return (num);
}
