#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head of the node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == 0)
		return (0);
	else
		return (listint_len(h -> next) + 1);
}
