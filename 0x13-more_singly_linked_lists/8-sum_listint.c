#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 *
 * @head: head of a linked list.
 *
 * Return: sum of all the data (n).
 * return 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
