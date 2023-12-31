#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)

{
	const list_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		if (p->str != NULL)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		p = p->next;
	}

	return (count);
}
