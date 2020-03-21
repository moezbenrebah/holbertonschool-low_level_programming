#include "lists.h"

/**
 *free_list - function to free list
 *@head: a pointer to a head
 *
 *Return: Void
 */

void free_list(list_t *head)
{
list_t *tmp;
tmp = head;

while (head != NULL)
{
tmp = head;
head = tmp->next;
free(tmp->str);
free(tmp);
}
}
