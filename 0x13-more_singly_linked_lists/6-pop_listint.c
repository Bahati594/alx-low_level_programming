#include "lists.h"

/**
 * pop_listint - Deletes a head node of the linked list.
 * @head: Pointer to a first element in a linked list.
 *
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

