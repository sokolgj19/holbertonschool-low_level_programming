#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed
 * or idx is out of range.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
