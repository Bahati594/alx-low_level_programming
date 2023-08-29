#include "lists.h"

/**
 * add_nodeint_end - Adds the node at the end of the linked list.
 * @head: Pointer to a first element in a list.
 * @n: Data to insert in a new element.
 *
 * Return: Pointer to a new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

