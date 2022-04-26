#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: points to the head of node
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t const *ptr;

	if (h == NULL)
		{
		printf("Error\n");
		}
	ptr = h;
	while (ptr != NULL)
		{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
		}

return (count);
}
