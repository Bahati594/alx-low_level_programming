#include "lists.h"

/**
 * reverse_listint - Reverses the linked list.
 * @head: Pointer to a first node in a list.
 *
 * Return: Pointer to a first node in a new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

