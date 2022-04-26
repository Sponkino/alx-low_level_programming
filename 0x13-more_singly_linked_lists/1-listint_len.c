#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: points to the head of node
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t const *ptr;

	ptr = h;
	while (ptr != NULL)
		{
		count++;
		ptr = ptr->next;
		}

return (count);
}
