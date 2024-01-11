#include "lists.h"

/**
 *delete_dnodeint_at_index- deletes a node at a given index
 *@head:pointer to head node
 *@index:index where node will be deleted
 *Return:1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	*head = current;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (0);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
/* If the node to be deleted is the tail */
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
	}
	return (0);
}
