#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *xxl = *head;
listint_t *current_node = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(xxl);
return (1);
}

while (i < index - 1)
{
if (!xxl || !(xxl->next))
return (-1);
xxl = xxl->next;
i++;
}


current_node = xxl->next;
xxl->next = current_node->next;
free(current_node);

return (1);
}
