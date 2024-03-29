#include "lists.h"
/**
 * free_listint - frees a listint_t linked list.
 * @head: pointerto the head of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
