#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the first node in a linked list of
 * nodes of type listint_t
 * Return : void
 */
void free_listint(listint_t *head)
{
        if (head)
        {
                free_listint(head->next);
                free(head);
        }
}
