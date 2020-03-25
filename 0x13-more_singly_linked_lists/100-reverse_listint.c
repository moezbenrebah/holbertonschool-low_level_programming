#include "lists.h"


/**
 *reverse_listint - reverse a list
 *@head: double pointer to a head
 *
 *Return: pointer to the first node of reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *next, *prev;

next = prev = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head != NULL)
{

next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;

}
*head = prev;

return (*head);
}
