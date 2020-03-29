#include "lists.h"

/**
 *listint_len - function to return number of elements
 *@h: pointer to head
 *
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
const listint_t *tmp;
int i = 0;

tmp = h;

while (tmp != NULL)
{
tmp = tmp->next;
i++;
}
return (i);
}
