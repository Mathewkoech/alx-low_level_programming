#include "lists.h"

/**
 * print_node - prints information about a listint_t node
 * @node: pointer to the node
 */
void print_node(const listint_t *node)
{
	printf("[%p] %d\n", (void *)node, node->n);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first element
 * Return: number of nodes on a list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *runner = head;
	size_t size = 0;

	while (current && runner && runner->next)
	{
		print_node(current);
		size++;

		current = current->next;
		runner = runner->next->next;

		if (current == runner)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
	}
	while (current)
	{
		print_node(current);
		size++;
		current = current->next;
	}
	return (size);
}
