#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: head of a list.
 *
 * Return: the head node’s data (n), or
 * return 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
