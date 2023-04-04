#include "lists.h"
/**
 * free_listint2 - frees a listint_t linked list and sets head to NULL.
 * @head: pointer to pointer to the head of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
/* Declare current and next nodes */
	listint_t *current_node = *head;
	listint_t *next;

/* Traverse the list and free each node */
	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}

/* Set head to NULL */
	*head = NULL;
}
