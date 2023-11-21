#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list
 *@head: pointer to the first element
 *Return: number of nodes on a list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t count = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	runner = head;

	while (runner != NULL && runner->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
		runner = runner->next->next;

		if (current == runner)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	if (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
	}
	return (count);
}
