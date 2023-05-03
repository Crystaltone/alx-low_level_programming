#include "lists.h"

/**
 * listint_len - Returns number of elements in a Linked Lists
 * @h: Linked list of type listint_t to traverse
 *
 * Return: Nmber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
