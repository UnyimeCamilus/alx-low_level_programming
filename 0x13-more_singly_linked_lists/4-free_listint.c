#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: the head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
