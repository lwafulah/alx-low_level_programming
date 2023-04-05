#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @index:  index of the node that should be deleted
 * @head: A pointer to the first node of the list.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;

	unsigned int i;

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		listint_t *temp;

		temp = *head;

		for (i = 0; i < index - 1; i++)
		{
			if (temp != NULL)
			{
				temp = temp->next;
			}
			else
			{
				return (-1);
			}
		}
	if (temp != NULL && temp->next != NULL)
	{
		listint_t *del = temp->next;

		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
		return (1);
	}
	else
	{
		return (-1);
	}
}
