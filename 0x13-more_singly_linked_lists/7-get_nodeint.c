#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: the pointer to the head
 * @index: is the index of the node, starting at 0
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
