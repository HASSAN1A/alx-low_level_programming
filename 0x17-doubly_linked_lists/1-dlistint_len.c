#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list.
 * @h: head of the list.
 *
 * Return: number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodos = 0;

	while (h)
	{
		nodos++;
		h = h->next;
	}

	return (nodos);
}
