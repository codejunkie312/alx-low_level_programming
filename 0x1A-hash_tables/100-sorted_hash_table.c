#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_node_t));
	if (sht == NULL)
		return (NULL);

	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table to add or update the key/value to
 * @key: key to add to the sorted hash table
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		shash_table_sort(ht);
	}
	return (1);
}

/**
 * shash_table_sort - sorts the sorted hash table
 * @ht: sorted hash table to sort
 */
void shash_table_sort(shash_table_t *ht)
{
	shash_node_t *temp, *prev;
	int flag = 1;

	if (ht == NULL || ht->shead == NULL || ht->shead->snext == NULL)
		return;

	while (flag == 1)
	{
		flag = 0;
		temp = ht->shead;
		while (temp->snext != NULL)
		{
			if (strcmp(temp->key, temp->snext->key) > 0)
			{
				if (temp->sprev != NULL)
					temp->sprev->snext = temp->snext;
				else
					ht->shead = temp->snext;
				temp->snext->sprev = temp->sprev;
				prev = temp->snext->snext;
				temp->snext->snext = temp;
				temp->sprev = temp->snext;
				temp->snext = prev;
				if (prev != NULL)
					prev->sprev = temp;
				flag = 1;
			}
			else
				temp = temp->snext;
		}
	}
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value
 * pairs in reverse order
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (temp != NULL)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}

	free(ht->array);
	free(ht);
}
