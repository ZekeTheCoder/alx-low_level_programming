#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * The function sets the head to NULL.
 *
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
	{
		return;
	}

	while (*head)
	{
		temp = (**head).next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
