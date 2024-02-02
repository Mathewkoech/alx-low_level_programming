#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - prints a hash table
* @ht: hash table
* Return: printed hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, checker = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (checker == 1)
				printf(", ");
			temp = ht->array[index];
			while (temp != NULL)
			{
				printf("\'%s\': \'%s\'", temp->key, temp->value);
			       temp = temp->next;
				if (temp)
					printf(", ");
			}
			checker = 1;
		}
	}
	printf("}\n");
}
