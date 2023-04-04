#include "lists.h"
/**
 * pop_listint - deletes the head node and returns its data value
 * @head: pointer to the head node of the linked list
 *
 * Return: data value of the head node, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *xyz;

		if (*head == NULL)
		return (0);

	xyz = *head;
	data = xyz->n;
	*head = xyz->next;
	free(xyz);

	return (data);
}
