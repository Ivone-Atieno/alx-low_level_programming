#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: input data
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	unsigned int y = 0;
	listint_t *prev = *head;

newnode = malloc(sizeof(listint_t));

if (!newnode || !head)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
{
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

for (; prev && y < idx; y++)
{
	if (y == idx - 1)
	{
		newnode->next = prev->next;
		prev->next = newnode;
		return (newnode);
	}
	else
		prev = prev->next;
}
return (NULL);
}
