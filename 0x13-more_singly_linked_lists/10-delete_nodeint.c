#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index.
 * @head: pointer to pointer to the first linked list.
 * @index: the index where the node should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *del_node = *head;
listint_t *before = NULL;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(del_node);
return (1);
}
while (del_node != NULL && i < index)
{
before = del_node;
del_node = del_node->next;
i++;
}
if (del_node == NULL)
return (-1);
before->next = del_node->next;
free(del_node);
return (1);
}
