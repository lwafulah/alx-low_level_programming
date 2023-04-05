#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: A pointer to the first node of the list.
 * Return: the head node’s data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
