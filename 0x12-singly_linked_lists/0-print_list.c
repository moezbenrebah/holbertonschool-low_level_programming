#include "lists.h"

/**
 *print_list - linked list to print
 *@h: pointer to head
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int count = 0;
const list_t *tmp;

tmp = h;

while (tmp != NULL)
{
if (tmp->str)
{
printf("[%u] %s\n", tmp->len, tmp->str);
}
else
{
printf("[%u] %s\n", 0, "(nil)");
}
tmp = tmp->next;
count++;
}
return (count);
}
