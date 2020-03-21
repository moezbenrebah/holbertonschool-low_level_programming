#include "lists.h"

/**
 *free_list - function to free list
 *@head: a pointer to a head
 *
 *Return: Void
 */

void free_list(list_t *head)
{
list_t *tmp, *store;
tmp = head;

while (tmp != NULL)
{
store = tmp->next;
free(tmp);
tmp = store;
}
}
