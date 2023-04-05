#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @index: the index of the node
 * @head: A pointer to the first node of the list.
 * Return: NULL If the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}
