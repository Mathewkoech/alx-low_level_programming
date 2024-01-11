#include "lists.h"
/**
 *sum_dlistint- returns the sum of all the data linked list.
 *@head: pointer to head node
 *Return:sum of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;/*variable to store sum*/

	while (head != NULL)
	{
		sum += head->n;/*Traverse the list and add the data of each node to the sum*/
		head = head->next;
	}
	return (sum);
}
