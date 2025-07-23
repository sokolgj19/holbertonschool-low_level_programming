#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - counts all elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
