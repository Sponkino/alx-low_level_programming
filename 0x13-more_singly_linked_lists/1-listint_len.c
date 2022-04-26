#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: points to the head of node
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
		{
		count++;
		h = h ->next;
		}

return (count);
}
