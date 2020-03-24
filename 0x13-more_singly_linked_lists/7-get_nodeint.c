#include "lists.h"

/**
 *get_nodeint_at_index - return nth node of the list
 *@head: pointer to a head
 *@index: integer
 *
 *Return: pointer
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i = 0;

tmp = head;

if (tmp == NULL)
return (NULL);

while (tmp != NULL)
{
if (i == index)
return (tmp);
i++;
tmp = tmp->next;
}
return (tmp);
}
