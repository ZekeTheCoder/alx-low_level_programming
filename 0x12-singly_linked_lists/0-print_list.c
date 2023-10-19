#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * If str is NULL, print [0] (nil)
 *
 * @h: pointer to first element of list
 *
 * Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			++size;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++size;
	}
	return (size);
}
