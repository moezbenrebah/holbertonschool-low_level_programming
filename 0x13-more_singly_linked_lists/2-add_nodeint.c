#include "lists.h"


/**
 *add_nodeint - add node at the first of list
 *@head: double pointing to the list's head
 *@n: integer
 *
 *Return: the new element's address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
