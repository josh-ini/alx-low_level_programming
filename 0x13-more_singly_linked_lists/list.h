#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct listint_t - singly link list
 * @n - integer
 * @next - points to the next node
 * description - singly link list 
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

/**
 * struct listptr_s - singly link list
 * @n - pointer of node
 * @next - points to the next node
 * description - singly link list of pointers
 */

typedef struct listptr_s
{
	void *p;
	struct listptr_s *next;
}

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
