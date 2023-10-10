#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/* Task 0 */
int linear_search(int *array, size_t size, int value);

/* Task 1 */
int binary_search(int *array, size_t size, int value);

/* Task 7 */
int jump_search(int *array, size_t size, int value);

/* Task 9 */
int interpolation_search(int *array, size_t size, int value);

/* Task 10 */
int exponential_search(int *array, size_t size, int value);

/* Task 11 */
int advanced_binary(int *array, size_t size, int value);

/* Task 12 */
/**
 * struct listint_s - Singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int jump_list(listint_t *list, size_t size, int value);

/* Task 13 */
/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
