#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print out
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	short print_comma = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (print_comma == 1)
				printf(", ");

			print_comma = 1;
			printf("'%s': '%s'", (char *) node->key,
					(char *) node->value);

			node = node->next;
		}
	}
	printf("}\n");
}
