#include "lists.h"


/**
 *reverse_listint - reverse a list
 *@head: double pointer to a head
 *
 *Return: pointer to the first node of reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp, *next, *prev;

next = prev = NULL;
tmp = *head;

if (head == NULL || *head == NULL)
return (NULL);

while (tmp != NULL)
{
next = tmp->next;
tmp->next = prev;
prev = tmp;
tmp = next;
}
*head = prev;

return (tmp);
}
