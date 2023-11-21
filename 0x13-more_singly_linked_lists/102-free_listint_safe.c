#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		temp = current->next;
		free(temp);

		if (temp == current)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (size);
}
