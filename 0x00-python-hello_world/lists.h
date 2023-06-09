#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @next: it points to the next node
 * @n: interger
 * Description: This is a singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listnt_t

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#ifndef
