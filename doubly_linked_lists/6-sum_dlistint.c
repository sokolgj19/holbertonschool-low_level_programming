#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum;
	
	sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	
	return (sum);
}
