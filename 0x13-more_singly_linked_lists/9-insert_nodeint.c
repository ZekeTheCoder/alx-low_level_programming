#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 *
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added. Index starts at 0.
 * @n: integer element.
 *
 * Return: the address of the new node,or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *h;
	listint_t *new_node;

	if (!head || !*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	h = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (h)
	{
		if (i == (idx - 1))
		{
			new_node->next = h->next;
			h->next = new_node;
			return (new_node);
		}
		h = h->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
