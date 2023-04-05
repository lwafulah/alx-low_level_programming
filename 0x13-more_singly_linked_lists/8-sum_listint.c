#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	if (head == 0)
		return (0);
	else
		return (sum_listint(head->next) + (head->n));
}
