#include "lists.h"
/**
*insert_nodeint_at_index-inserts new node at given position
 *@index:Index where the new node should be added
 *@n:value of new node
 *@head:pointer to head of the list
 *Return: Address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int count;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *head;
	count = 0;
	while (count < (index - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *
 *Return: NULL if function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
