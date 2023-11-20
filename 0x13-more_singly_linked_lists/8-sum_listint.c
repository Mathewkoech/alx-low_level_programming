#include "lists.h"
/**
 * sum_listint-Returns the sum of all the data (n)
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
