#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * linked list
 * @index: index of the node, starting from 0
 * @head: pointer to the header of linked list
 * Return: the node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
