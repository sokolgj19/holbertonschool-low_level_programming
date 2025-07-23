#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);
	
	while (head != NULL)
	{
		if (index == count)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}
