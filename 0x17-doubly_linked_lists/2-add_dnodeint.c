#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: pointer to a pointer to the first node of the list.
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = (*head);
new_node->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}
