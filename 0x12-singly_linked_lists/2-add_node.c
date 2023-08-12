#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: the address of the new element else NULl
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;

	fresh = malloc(sizeof(list_t));

	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	if (fresh->str == NULL)
	{
		free(fresh);
		return (NULL);
	}

	fresh->len = strlen(str);
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
