#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentHead = head;

	while (currentHead != NULL)
	{
		head = head->next;
		free(currentHead);
		currentHead = head;
	}
}
