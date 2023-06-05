#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: input as integer
 *
 * Return: pointer to the new node else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *prevnode = *head;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

if (!*head)
{
	*head = newnode;
	return (newnode);
}

while (prevnode->next)
	prevnode = prevnode->next;

prevnode->next = newnode;
return (newnode);
}
