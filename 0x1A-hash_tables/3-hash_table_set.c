#include "hash_tables.h"

/**
* create_hash_node - creates a new hash node
* @key: key for node
* @value: value for node
* Return: new node or null
*/
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
* hash_table_set - adds an element to the hash table.
* @ht: hash table to update the key/value to
* @key: key
* @value: key value
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *hash_node, *temp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	|| key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = create_hash_node(key, value);
	if (hash_node == NULL)
	{
		return (0);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
