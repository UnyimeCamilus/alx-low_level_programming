#include "lists.h"
/**
 * list_len - function that returns the number of elements in a
 * linked list_t
 * @h: head nodes
 * Return: length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
