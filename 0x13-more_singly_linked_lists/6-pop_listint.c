#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list and returns its value
 * @head: Pointer to the head of the linked list
 *
 * Return: The value of the popped or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;

	*head = (*head)->next;
	i = temp->n;

	free(temp);
	return (i);
}
