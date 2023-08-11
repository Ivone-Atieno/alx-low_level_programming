#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: Pointer to the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t print_l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		print_l++;
	}
	return (print_l);
}
