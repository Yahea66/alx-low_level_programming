#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the first linked list.
 * @idx: the index where the new node should be inserted
 * @n: the data to be inserted in the new node
 *
 * Return: the address of the new node, or NULL if it failed 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *after = *head;
listint_t *before = NULL;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (after != NULL && i < idx)
{
before = after;
after = after->next;
i++;
}
if (i != idx)
{
free(new_node);
return (NULL);
}
new_node->next = after;
before->next = new_node;
return (new_node);
}
