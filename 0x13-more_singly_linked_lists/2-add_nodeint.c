#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer to head of the node
 * @n: integer to store
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
