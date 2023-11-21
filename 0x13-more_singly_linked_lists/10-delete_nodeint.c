#include "lists.h"
/**
 * delete_nodeint_at_index -deletes a node
 * @head: pointer to the first node
 * @index: index to the first node
 * Return: 1 if success, - 1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int count;

	temp = *head;
	count = 0;
	while (temp)
	{
		if (count == (index - 1))
		{
			current = (temp->next)->next;
			free(temp->next);
			temp->next = current;
			return (1);
		}
		else if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
