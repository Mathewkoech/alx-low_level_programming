#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		count++;
	}

	return (count);
}
