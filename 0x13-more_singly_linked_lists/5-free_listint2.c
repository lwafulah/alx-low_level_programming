#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head:  the first node in a linked list of nodes of type
 * Return: head as NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *cur = *head;

	while (cur != NULL)
	{
		listint_t *temp = cur->next;

		free(cur);
		cur = temp;
	}
	*head = NULL;
}
