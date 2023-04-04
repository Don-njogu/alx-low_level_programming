#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the head of the listint_t list.
 * @n: the value to be added to the new node.
 *
 * Return: the address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* update the new node's next pointer */
	new_node->next = *head;

	/* update the head of the list */
	*head = new_node;

	/* return the address of the new node */
	return (new_node);
}
