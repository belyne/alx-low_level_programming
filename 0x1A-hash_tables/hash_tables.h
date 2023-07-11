#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct sorted_hash_node - Node of a sorted hash table
 * @key: The key, string
 * The key is unique in the SortedHashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @prev: A pointer to the previous node of the List
 * @next_sorted: A pointer to the next element of the sorted linked list
 */
typedef struct sorted_hash_node
{
	char *key;
	char *value;
	struct sorted_hash_node *next;
	struct sorted_hash_node *prev;
	struct sorted_hash_node *next_sorted;
} sorted_hash_node_t;

/**
 * struct sorted_hash_table - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our SortedHashTable to use a Chaining collision handling
 * @head: A pointer to the first element of the sorted linked list
 * @tail: A pointer to the last element of the sorted linked list
 */
typedef struct sorted_hash_table
{
	unsigned long int size;
	sorted_hash_node_t **array;
	sorted_hash_node_t *head;
	sorted_hash_node_t *tail;
} sorted_hash_table_t;

sorted_hash_table_t *sorted_hash_table_create(unsigned long int size);
int sorted_hash_table_set(sorted_hash_table_t *ht,
		const char *key, const char *value);
char *sorted_hash_table_get(const sorted_hash_table_t *ht, const char *key);
void sorted_hash_table_print(const sorted_hash_table_t *ht);
void sorted_hash_table_print_rev(const sorted_hash_table_t *ht);
void sorted_hash_table_delete(sorted_hash_table_t *ht);

#endif /* HASH_TABLES_H */
