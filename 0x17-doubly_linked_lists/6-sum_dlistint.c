#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * linked list
 * @head: pointer to the head of the list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
