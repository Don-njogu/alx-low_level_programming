#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head node of the linked list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL)
	{
	if (i == index)
	{
		return (current_node);
	}
		current_node = current_node->next;
		i++;
	}

	return (NULL);
}
