#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the listint_t list
 *
 * Return: the data inside the elements that was deleted else 0
 */

int pop_listint(listint_t **head)
{

	listint_t *prev;
	int data;

if (head == NULL || *head == NULL)
	return (0);

data = (*head)->n;
prev = (*head)->next;

free(*head);
*head = prev;

return (data);
}
