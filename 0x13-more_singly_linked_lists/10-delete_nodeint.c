#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 for sucess else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *new = NULL;
	unsigned int y = 0;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = (*head)->next;
	free(prev);
	return (1);
}

while (y < index - 1)
{
	if (!prev || !(prev->next))
		return (-1);
	prev = prev->next;
	y++;
}

new = prev->next;
prev->next = new->next;
free(new);
return (1);
}
