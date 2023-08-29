#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts the new node in the linked list,
 * at a given position.
 * @head: Pointer to a first node in a list.
 * @idx: Index where a new node is added.
 * @n: Data to insert in a new node.
 *
 * Return: Pointer to a new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

