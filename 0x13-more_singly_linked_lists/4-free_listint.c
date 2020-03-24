#include "lists.h"

/**
 *free_listint - free list
 *@head: pointer to head
 *
 *Return: void
 */

void free_listint(listint_t *head)
{
listint_t *tmp;
tmp = head;

while (head->next != NULL)
{
tmp = head;
head = tmp->next;
free(tmp);
}
}
