#include "lists.h"
#include <stdio.h>

/**
 * list_len - Counts the number of elements in a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
