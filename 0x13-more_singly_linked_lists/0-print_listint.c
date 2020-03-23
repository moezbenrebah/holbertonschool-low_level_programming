#include "lists.h"


/**
 *print_listint - function to print element of list
 *@h: pointer to head
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *tmp;
int i = 0;

tmp = h;

while (tmp != NULL)
{
if (tmp->n)
{
printf("%d\n", tmp->n);
}
tmp = tmp->next;
i++;
}
return (i);
}
