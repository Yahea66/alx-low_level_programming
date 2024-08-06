#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the first linked list.
 * @n: element of the list of type int.
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
