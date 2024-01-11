#include "lists.h"
/**
 **insert_dnodeint_at_index- adds new node in a list at specified index
 *@h:head node pointer
 *@idx:index where new node will be inserted
 *@n:node value
 *Return:return address of new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	/*If the index is 0, call the add_dnodeint function to add at the beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*Traverse the list until reaching the node at index (idx - 1)*/
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	/*If the next node is NULL, it means temp is the last node; add at the end*/
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	/*updating pointers to insert new node*/
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
