#include "lists.h"

/**
 * print_node - prints info on node
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
		current = current->next;
		runner = runner->next->next;
		if (current == runner)
		{
			current = current->next;
			size = 1;
			break;
		}
	}

	while (head)
	{
		size++;
		if (size && head == current)
		{
			print_node(head);
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		print_node(head);
		head = head->next;
	}
	return (size);
}
