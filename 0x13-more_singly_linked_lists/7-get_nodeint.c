#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first linked list.
 * @index: the index of the node.
 *
 * Return: nth node as a listint_t pointer, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;
while (tmp != NULL && i < index)
{
tmp = tmp->next;
i++;
}
return (tmp);
} 
