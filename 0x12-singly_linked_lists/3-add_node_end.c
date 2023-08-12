#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list_t list
 * @head: pointer to pointer to the linked list
 * @str: parameter as string
 *
 * Return: address of the new element, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *curr = *head;
	list_t *fresh;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;

	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (curr->next)
		curr = curr->next;
	curr->next = fresh;
	return (fresh);
}
